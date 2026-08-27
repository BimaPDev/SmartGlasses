; FUN_2c6442fc @ 0x2c6442fc size=40
  push {lr}
  sub sp,#0xc
  str r1,[sp,#0x4]
  cbz r0,0x2c64431e
  cbz r1,0x2c644318
  movs r3,#0x0
  add r1,sp,#0x4
  ldr r0,[r0,#0x4]
  mov r2,r3
  bl 0x2c6450ec
  add sp,#0xc
  pop.w pc
  mvn r0,#0x7e
  b 0x2c644312
  mvn r0,#0x3
  b 0x2c644312
