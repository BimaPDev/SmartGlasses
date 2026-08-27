; FUN_2c13f46c @ 0x2c13f46c size=40
  push {lr}
  sub sp,#0xc
  str r1,[sp,#0x4]
  cbz r0,0x2c13f48e
  cbz r1,0x2c13f488
  movs r3,#0x0
  ldr r0,[r0,#0x4]
  mov r2,r3
  add r1,sp,#0x4
  bl 0x2c14006c
  add sp,#0xc
  pop.w pc
  mvn r0,#0x7e
  b 0x2c13f482
  mvn r0,#0x3
  b 0x2c13f482
