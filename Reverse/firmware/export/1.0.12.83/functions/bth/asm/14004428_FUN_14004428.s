; FUN_14004428 @ 0x14004428 size=40
  push {lr}
  sub sp,#0xc
  str r1,[sp,#0x4]
  cbz r0,0x1400444a
  cbz r1,0x14004444
  movs r3,#0x0
  ldr r0,[r0,#0x4]
  mov r2,r3
  add r1,sp,#0x4
  bl 0x14005118
  add sp,#0xc
  pop.w pc
  mvn r0,#0x7e
  b 0x1400443e
  mvn r0,#0x3
  b 0x1400443e
