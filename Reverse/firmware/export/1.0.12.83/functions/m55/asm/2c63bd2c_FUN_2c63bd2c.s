; FUN_2c63bd2c @ 0x2c63bd2c size=34
  push {r4,lr}
  ldr r4,[0x2c63bd58]
  sub sp,#0x8
  ldrb r3,[r4,#0x0]
  cbnz r3,0x2c63bd3a
  add sp,#0x8
  pop {r4,pc}
  ldr r1,[0x2c63bd5c]
  ldr r3,[0x2c63bd60]
  ldr r2,[0x2c63bd64]
  strd r1,r0,[sp,#0x0]
  movw r1,#0x27a
  movs r0,#0x4
  bl 0x2c673d88
