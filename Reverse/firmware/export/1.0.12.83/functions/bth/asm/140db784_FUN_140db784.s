; FUN_140db784 @ 0x140db784 size=32
  subs r1,#0x1
  add r2,r0
  push {r4,lr}
  cmp r0,r2
  bne 0x140db792
  movs r0,#0x0
  b 0x140db79e
  ldrb r3,[r0,#0x0]
  ldrb.w r4,[r1,#0x1]!
  cmp r3,r4
  beq 0x140db7a0
  subs r0,r3,r4
  pop {r4,pc}
  adds r0,#0x1
  b 0x140db78a
