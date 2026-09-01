; FUN_10136b9a @ 0x10136b9a size=40
  push {r0,r1,r2,lr}
  mov r2,r0
  cbz r0,0x10136bbc
  ldrb r3,[r0,#0x0]
  cbz r3,0x10136bbc
  ldr r3,[r0,#0x4]
  cbz r3,0x10136bbc
  movs r3,#0x0
  movs r1,#0x5a
  str r3,[sp,#0x0]
  movs r0,#0xcf
  movs r3,#0x8
  bl 0x100d44e4
  add sp,#0xc
  pop.w pc
  mvn r0,#0x15
  b 0x10136bb6
