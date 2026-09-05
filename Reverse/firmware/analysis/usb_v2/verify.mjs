#!/usr/bin/env node
/* Gates: does a USB mode exist on Star Air? Re-run under the CORRECTED address model. */
import { readFileSync } from 'node:fs';
const M = readFileSync('Reverse/firmware/x_1.0.11.53/platform_tester.bin');
const B = readFileSync('Reverse/firmware/x_1.0.11.53/best1600_watch_bth.bin');
const s = (d,o)=>{let e=o;while(d[e])e++;return d.subarray(o,e).toString('latin1');};
const n = (d,re)=>new Set((d.toString('latin1').match(re)||[])).size;
const which = process.argv[2]||'all'; let bad=0;
const ok=(g,c,m)=>{console.log(`${g} ${c?'ok':'FAIL'} — ${m}`); if(!c)bad++;};

if(which==='g0'||which==='all'){
  const jbd=n(M,/jbd[0-9a-z_]*/gi), a2m=n(M,/a2dp[a-z_]*/gi), a2b=n(B,/a2dp[a-z_]*/gi), lfs=n(M,/lfs_[a-z_]+/g);
  ok('G0', jbd>=5 && a2m>=10 && a2b>=10 && lfs>=10,
     `CONTROL — method finds known subsystems: JBD=${jbd}, A2DP M55=${a2m}/BTH=${a2b}, littlefs=${lfs}. ` +
     `A search that cannot find these proves nothing about USB.`);
}
if(which==='g1'||which==='all'){
  // the four real tokens, after discarding substring noise (usButton, statUSBar, audio cdc_*)
  const chg = s(M,0x42290), enu = s(M,0x17101c), drv = s(M,0x15db7c);
  ok('G1', chg.startsWith('[CHG] vbus usb_enable') && enu==='en_usb' && drv==='DRVUSB',
     `real tokens: "${chg.trim()}" (charger); "en_usb" @0x17101c (factory cmd); ` +
     `"DRVUSB" @0x15db7c (trace-module name table, alongside DRVANA/DRVBT/DRVFLS — not a driver). ` +
     `All other "usb" matches are noise: usButton, launcher_statUSBar_battery_*, audio cdc_*.`);
}
if(which==='g2'||which==='all'){
  const probes = [
    [/bDeviceClass|bNumConfigurations|idVendor|idProduct|bMaxPacketSize|wTotalLength/g,'descriptors'],
    [/GET_DESCRIPTOR|SET_ADDRESS|SET_CONFIGURATION|CLEAR_FEATURE/g,'std requests'],
    [/usb_device|usbdevice|hal_usb|usb_init|usb_open|usb_dev/g,'driver names'],
    [/CDC ACM|Mass Storage|MSC BOT|HID report|WinUSB/g,'class drivers'],
  ];
  const found = probes.map(([re,l])=>[l, n(M,re)+n(B,re)]);
  const ctrl = n(M,/GATT|GAP|L2CAP/g)+n(B,/GATT|GAP|L2CAP/g);
  const none = found.every(([,c])=>c===0);
  ok('G2', none && ctrl>0,
     `NO USB device stack in either image: ${found.map(([l,c])=>`${l}=${c}`).join(', ')}. ` +
     `Control (BT stack strings) = ${ctrl}, so the probe works. ` +
     `NOTE: BES USB download mode lives in bootROM, which is NOT in these images — absence here ` +
     `does not rule out a ROM-level mode.`);
}
if(which==='g3'||which==='all'){
  // en_usb command-table entry: {name, flags, handler, description}
  const D=0x3BFD7CB0, r32=(d,o)=>d.readUInt32LE(o);
  const nameP=r32(M,0x49106c), flags=r32(M,0x491070), handler=r32(M,0x491074), descP=r32(M,0x491078);
  ok('G3', s(M,nameP-D)==='en_usb' && s(M,descP-D)==='enable usb' && handler===0x2C52DAF5,
     `enable path = factory MMI command "${s(M,nameP-D)}" ("${s(M,descP-D)}"), flags 0x${flags.toString(16)}, ` +
     `handler VA 0x${handler.toString(16)} (file 0x51daf4). It parses one arg and sends a single byte ` +
     `0xFE=enable / 0xFD=disable via a vtable call, returning RETURN:PASS/FAIL. It does NOT initialise ` +
     `a stack — none is present (G2) — so on this firmware it most plausibly gates VBUS/charging, ` +
     `consistent with the [CHG] string. UNVERIFIED what the receiving side does.`);
}
if(bad){console.log(`\n${bad} gate(s) unmet`);process.exit(1);}
console.log('\nusb-mode gates passed');
