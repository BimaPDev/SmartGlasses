#!/usr/bin/env node
// Streams a headless Claude Code session onto the MYVU lens.
//
// Topology, same shape as even-terminal but with THIS repo's app as the bridge
// instead of a vendor app:
//
//   laptop:  claude -p --output-format stream-json   <- this file, ws://:3457
//      |     LAN
//   iPhone:  MyvuDemo  ClaudeBridgeSession
//      |     BLE / StarryNet
//   lens:    one notification card, repainted in place
//
// Two things here are not cosmetic:
//
//  1. COALESCING. Every repaint is a BLE write; the session logs show ~30-50 ms
//     per fragment plus an ack. Pushing per token would flood the link and
//     starve everything else on it (radar cards, heartbeats). Frames go out on
//     a timer at FPS, carrying whatever the buffer holds.
//
//  2. TAIL, NOT HEAD. `Notifications.sanitize` truncates by keeping the FIRST
//     n characters, which for a terminal is exactly backwards — it would pin
//     the view to the start of the run forever. The tail is cut here so the
//     SDK's cap never fires.
import { spawn } from "node:child_process";
import { WebSocketServer } from "ws";
import os from "node:os";

const PORT = Number(process.env.PORT ?? 3457);
const FPS = Number(process.env.FPS ?? 2);          // repaints/sec, keep <= 3
const BODY_MAX = Number(process.env.BODY_MAX ?? 400); // < the SDK's 500 cap
const CWD = process.env.CLAUDE_CWD ?? process.cwd();

let buffer = "";        // rolling transcript tail
let title = "Claude";   // card heading: status or current tool
let dirty = false;
let child = null;

const wss = new WebSocketServer({ port: PORT });
const clients = new Set();

function broadcast(obj) {
  const msg = JSON.stringify(obj);
  for (const c of clients) if (c.readyState === 1) c.send(msg);
}

/** The lens shows ~5 flowed lines, so only the tail is ever worth sending. */
function frame() {
  const body = buffer.length > BODY_MAX ? buffer.slice(-BODY_MAX) : buffer;
  return { type: "frame", title, body };
}

function append(text) {
  if (!text) return;
  // Newlines are flattened by the SDK anyway (the lens flows one block), so
  // collapse them here where the intent is visible rather than losing the
  // structure silently downstream.
  buffer += text.replace(/\s*\n+\s*/g, "  ");
  if (buffer.length > BODY_MAX * 4) buffer = buffer.slice(-BODY_MAX * 4);
  dirty = true;
}

/** Pulls display text out of one stream-json line, tolerating shape drift. */
function ingest(line) {
  let ev;
  try { ev = JSON.parse(line); } catch { return; }

  const content = ev?.message?.content;
  if (Array.isArray(content)) {
    for (const part of content) {
      if (part?.type === "text" && part.text) append(part.text);
      else if (part?.type === "tool_use" && part.name) {
        title = `⚙ ${part.name}`;
        dirty = true;
      }
    }
  }
  if (ev?.type === "result") {
    title = ev.is_error ? "Claude · error" : "Claude · done";
    if (typeof ev.result === "string" && !content) append(ev.result);
    dirty = true;
  }
}

function ask(prompt) {
  if (child) child.kill();
  buffer = "";
  title = "Claude · thinking";
  dirty = true;

  child = spawn("claude",
    ["-p", prompt, "--output-format", "stream-json", "--verbose"],
    { cwd: CWD, stdio: ["ignore", "pipe", "pipe"] });

  let pending = "";
  child.stdout.on("data", (chunk) => {
    pending += chunk.toString();
    const lines = pending.split("\n");
    pending = lines.pop() ?? "";      // keep the partial line for next chunk
    for (const l of lines) if (l.trim()) ingest(l);
  });
  child.stderr.on("data", (d) => process.stderr.write(d));
  child.on("error", (e) => { title = "Claude · error"; append(e.message); });
  child.on("close", () => {
    if (title.startsWith("⚙") || title.endsWith("thinking")) title = "Claude · done";
    dirty = true;
    child = null;
  });
}

wss.on("connection", (ws) => {
  clients.add(ws);
  ws.send(JSON.stringify(frame()));
  ws.on("message", (raw) => {
    let m; try { m = JSON.parse(raw.toString()); } catch { return; }
    if (m?.type === "prompt" && typeof m.text === "string" && m.text.trim()) {
      console.log(`> ${m.text}`);
      ask(m.text.trim());
    }
  });
  ws.on("close", () => clients.delete(ws));
});

// The only thing that ever writes to the lens.
setInterval(() => {
  if (!dirty || clients.size === 0) return;
  dirty = false;
  broadcast(frame());
}, Math.max(200, Math.round(1000 / FPS)));

const lan = Object.values(os.networkInterfaces()).flat()
  .find((i) => i && i.family === "IPv4" && !i.internal)?.address ?? "127.0.0.1";
console.log(`claude-bridge  ws://${lan}:${PORT}   cwd=${CWD}  ${FPS} fps`);
