; FUN_2c4df518 @ 0x2c4df518 size=26
  push {r0,r1,r2,lr}
  ldrb r3,[r0,#0xa]
  str r3,[sp,#0x0]
  ldrb r3,[r0,#0x9]
  ldrb r2,[r0,#0x8]
  ldr r1,[r0,#0x4]
  ldr r0,[0x2c4df534]
  bl 0x2c4e0558
  movs r0,#0x1
  add sp,#0xc
  pop.w pc
