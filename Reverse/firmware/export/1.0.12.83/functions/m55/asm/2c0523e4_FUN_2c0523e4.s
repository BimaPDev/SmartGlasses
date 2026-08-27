; FUN_2c0523e4 @ 0x2c0523e4 size=30
  push {r0,r1,r4,lr}
  blx 0x2b934a64
  strh r3,[r6,r7]
  str r0,[r4,#0x0]
  lsls r0,r0,#0x5
  ldrb r2,[r5,#0x1c]
  ldrsh r1,[r6,r7]
  adr r6,[0x2c052604]
  movs r2,#0x54
  ldr r0,[0x2c05278c]
  lsls r1,r0,#0x8
  sbcs pc,lr,#0x30000000
  pop {r1,r3,r5,pc}
