; FUN_10107550 @ 0x10107550 size=66
  push {r4,r5,r6}
  ldrsh.w r4,[r0,#0x12e]
  cbz r4,0x10107570
  ldr r6,[r0,#0x7c]
  ldr.w r5,[r0,#0x84]
  ldr.w r4,[r6,r1,lsl #0x3]
  add r2,r4
  str.w r2,[r6,r1,lsl #0x3]
  ldrb r2,[r5,r1]
  orr r2,r2,#0x8
  strb r2,[r5,r1]
  ldrsh.w r2,[r0,#0x130]
  cbz r2,0x1010758e
  ldr r2,[r0,#0x7c]
  ldr.w r4,[r0,#0x84]
  add.w r2,r2,r1, lsl #0x3
  ldr r0,[r2,#0x4]
  add r3,r0
  str r3,[r2,#0x4]
  ldrb r3,[r4,r1]
  orr r3,r3,#0x10
  strb r3,[r4,r1]
  pop {r4,r5,r6}
  bx lr
