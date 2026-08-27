; FUN_2c629e10 @ 0x2c629e10 size=26
  ldr r2,[0x2c629e2c]
  movs r1,#0x1
  ldr r3,[0x2c629e30]
  push {r4}
  ldr r4,[r2,#0x0]
  strb r1,[r3,#0x0]
  ldrb r2,[r3,#0x0]
  cmp r2,#0x0
  beq 0x2c629e1a
  subs r0,r4,r0
  pop.w r4
  bx lr
