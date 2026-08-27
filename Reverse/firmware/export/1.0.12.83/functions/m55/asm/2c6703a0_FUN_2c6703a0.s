; FUN_2c6703a0 @ 0x2c6703a0 size=36
  rsb.w r2,r2,#0x8
  lsls r2,r2,#0x2
  push {r4,r5,r6,lr}
  rsb.w r6,r2,#0x20
  ldr r3,[r0,#0x4]
  ldr r4,[r0,#0x0]
  lsl.w r5,r3,r6
  lsrs r3,r2
  orrs r4,r5
  str r4,[r0,#0x0]
  str.w r3,[r0,#0x4]!
  cmp r0,r1
  bcc 0x2c6703ac
  pop {r4,r5,r6,pc}
