// Drives the bridge without the glasses or the real claude CLI: connects,
// asserts the initial frame, then replays canned stream-json through a fake
// `claude` on PATH to prove ingest + coalescing + tail-trim.
import { WebSocket } from "ws";
const ws = new WebSocket("ws://127.0.0.1:3457");
const frames = [];
ws.on("open", () => {
  ws.send(JSON.stringify({ type: "prompt", text: "smoke" }));
});
ws.on("message", (d) => frames.push(JSON.parse(d.toString())));
setTimeout(() => {
  const last = frames[frames.length - 1];
  console.log("frames received:", frames.length);
  console.log("last title:", JSON.stringify(last?.title));
  console.log("last body len:", last?.body?.length);
  console.log("body tail:", JSON.stringify(last?.body?.slice(-60)));
  const ok = frames.length >= 2
    && last.body.length <= 400
    && last.body.endsWith("END")          // proves TAIL kept, not head
    && !last.body.includes("\n");         // proves newlines collapsed
  console.log(ok ? "SMOKE PASS" : "SMOKE FAIL");
  process.exit(ok ? 0 : 1);
}, 2500);
