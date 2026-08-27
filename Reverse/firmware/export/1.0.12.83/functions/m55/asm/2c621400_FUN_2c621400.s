; FUN_2c621400 @ 0x2c621400 size=98
  push {r4,r5,lr}
  ldr r2,[r0,#0x10]
  mov r3,r0
  ldr r5,[r1,#0x10]
  ubfx r0,r2,#0x0,#0x9
  ldr r4,[r1,#0x14]
  ldrb.w r12,[r5,r0]
  ldrh.w r0,[r4,r0,lsl #0x1]
  cmp.w r12,#0x9
  bhi 0x2c62142a
  ldr r1,[r3,#0xc]
  lsr.w r2,r2,r12
  add r1,r12
  strd r1,r2,[r3,#0xc]
  pop {r4,r5,pc}
  sub.w lr,r12,#0x9
  mov.w r12,#0xffffffff
  ldr r4,[r3,#0xc]
  lsrs r2,r2,#0x9
  lsl.w r12,r12,lr
  adds r4,#0x9
  str r2,[r3,#0x10]
  bic.w r12,r2,r12
  str r4,[r3,#0xc]
  add r0,r12
  ldr r5,[r1,#0x10]
  ldrb.w r12,[r5,r0]
  sub.w r12,r12,#0x9
  lsr.w r2,r2,r12
  add r4,r12
  strd r4,r2,[r3,#0xc]
  ldr r3,[r1,#0x14]
  ldrh.w r0,[r3,r0,lsl #0x1]
  pop {r4,r5,pc}
