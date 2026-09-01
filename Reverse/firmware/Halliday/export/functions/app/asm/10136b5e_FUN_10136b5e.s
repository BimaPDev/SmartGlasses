; FUN_10136b5e @ 0x10136b5e size=36
  push {r0,r1,r2,lr}
  mov r2,r0
  cbz r0,0x10136b7c
  ldrb r3,[r0,#0x0]
  cbz r3,0x10136b7c
  movs r3,#0x0
  movs r1,#0x85
  str r3,[sp,#0x0]
  movs r0,#0xd3
  movs r3,#0x8
  bl 0x100d44e4
  add sp,#0xc
  pop.w pc
  mvn r0,#0x15
  b 0x10136b76
