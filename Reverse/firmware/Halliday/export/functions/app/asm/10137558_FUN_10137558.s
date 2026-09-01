; FUN_10137558 @ 0x10137558 size=90
  push {r3,r4,r5,lr}
  ldrb.w r3,[r0,#0x13c]
  mov r4,r0
  and r5,r3,#0xf
  cmp.w r5,r3, lsr #0x4
  lsr.w r2,r3,#0x4
  bhi 0x100de12a
  ldr r3,[0x100de148]
  ldrb r3,[r3,#0x3]
  lsls r3,r3,#0x1b
  bpl 0x100de118
  ldr r0,[0x100de14c]
  bl 0x10119dc2
  ldr r3,[0x100de150]
  movs r1,#0x0
  ldr r3,[r3,#0x0]
  mov r0,r4
  ldr r3,[r3,#0x18]
  blx r3
  mvn r0,#0x4
  pop {r3,r4,r5,pc}
  add.w r5,r2,#0x94
  ldrh.w r5,[r0,r5,lsl #0x1]
  adds r2,#0x1
  bfi r3,r2,#0x4,#0x4
  strh.w r5,[r0,#0xd2]
  strb.w r3,[r0,#0x13c]
  pop.w {r3,r4,r5,lr}
  b.w 0x100de084
  movs r1,#0x2
  b.w 0x100de0f4
