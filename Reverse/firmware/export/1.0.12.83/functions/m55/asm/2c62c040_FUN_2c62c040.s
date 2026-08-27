; FUN_2c62c040 @ 0x2c62c040 size=58
  movs r3,#0x0
  ldr r2,[0x2c62c080]
  ldr.w r1,[r2,r3,lsl #0x3]
  add.w r12,r2,r3, lsl #0x3
  adds r3,#0x1
  cmp r1,r0
  beq 0x2c62c070
  cmp r3,#0x10
  bne 0x2c62c044
  push {r4,lr}
  ldr r4,[0x2c62c084]
  sub sp,#0x8
  ldr r3,[0x2c62c088]
  movw r2,#0x19d
  ldr r1,[0x2c62c08c]
  movs r0,#0x3
  str r4,[sp,#0x0]
  bl 0x2c62c82c
  ldrb.w r3,[r12,#0x6]
  bfc r3,#0x0,#0x1
  strb.w r3,[r12,#0x6]
  bx lr
