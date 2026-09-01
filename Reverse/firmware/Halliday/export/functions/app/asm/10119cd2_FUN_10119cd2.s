; FUN_10119cd2 @ 0x10119cd2 size=86
  adds r3,#0x1
  cmp.w r3,r1, lsl #0x1
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r1
  lsl.w r6,r1,#0x1
  bcs 0x10119cec
  movs r6,#0x0
  mov r0,r6
  pop.w {r4,r5,r6,r7,r8,pc}
  mov r3,r0
  adds r5,r2,#0x1
  adds r7,r0,r1
  cmp r3,r7
  bne 0x10119cfe
  movs r3,#0x0
  strb.w r3,[r2,r4,lsl #0x1]
  b 0x10119ce6
  ldrb r0,[r3,#0x0]
  subs r1,r5,#0x1
  lsrs r0,r0,#0x4
  mov r8,r3
  bl 0x10119cb8
  cmp r0,#0x0
  blt 0x10119ce4
  ldrb.w r0,[r8,#0x0]
  mov r1,r5
  and r0,r0,#0xf
  adds r3,#0x1
  bl 0x10119cb8
  cmp r0,#0x0
  add.w r5,r5,#0x2
  bge 0x10119cf2
  b 0x10119ce4
