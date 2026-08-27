; FUN_2c4fd30c @ 0x2c4fd30c size=44
  push {r4,lr}
  mov r4,r0
  sub sp,#0x8
  ldr r2,[0x2c4fd338]
  movw r0,#0xb53
  ldr r3,[r4,#0x4]
  ldr r1,[0x2c4fd33c]
  str r3,[sp,#0x0]
  ldrb r3,[r4,#0x0]
  bl 0x2c6741e8
  ldrb r3,[r4,#0x10]
  ldr r2,[r4,#0x8]
  movw r0,#0xb52
  ldr r1,[0x2c4fd340]
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c6741e8
