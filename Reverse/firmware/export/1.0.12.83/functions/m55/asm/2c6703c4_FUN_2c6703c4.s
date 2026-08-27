; FUN_2c6703c4 @ 0x2c6703c4 size=40
  ldr r3,[r0,#0x0]
  adds r3,#0x1
  push {r4,r5,lr}
  ldrb.w r4,[r1],#0x1
  cbnz r4,0x2c6703d6
  str r3,[r0,#0x0]
  movs r0,#0x1
  pop {r4,r5,pc}
  ldrb.w r2,[r3],#0x1
  sub.w r5,r2,#0x41
  cmp r5,#0x19
  it ls
  add.ls r2,#0x20
  cmp r2,r4
  beq 0x2c6703ca
  movs r0,#0x0
  b 0x2c6703d4
