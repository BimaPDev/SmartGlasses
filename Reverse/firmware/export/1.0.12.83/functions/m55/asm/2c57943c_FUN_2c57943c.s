; FUN_2c57943c @ 0x2c57943c size=36
  push {r4,r5,lr}
  ldr r5,[0x2c5794a8]
  sub sp,#0x14
  mov r4,r0
  bl 0x2c57a67c
  ldr r3,[0x2c5794ac]
  ldrb r1,[r5,#0x0]
  ldr r2,[0x2c5794b0]
  str r0,[sp,#0x8]
  movs r0,#0x4
  str r1,[sp,#0xc]
  ldr r1,[0x2c5794b4]
  strd r2,r3,[sp,#0x0]
  movs r2,#0xd0
  bl 0x2c62c82c
