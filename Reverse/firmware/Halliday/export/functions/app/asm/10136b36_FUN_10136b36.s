; FUN_10136b36 @ 0x10136b36 size=40
  push {r0,r1,r2,lr}
  mov r2,r0
  cbz r0,0x10136b58
  ldrb r3,[r0,#0x6]
  cbz r3,0x10136b58
  ldr r3,[r0,#0xc]
  cbz r3,0x10136b58
  movs r3,#0x0
  movs r1,#0x81
  str r3,[sp,#0x0]
  movs r0,#0xd3
  movs r3,#0x10
  bl 0x100d44e4
  add sp,#0xc
  pop.w pc
  mvn r0,#0x15
  b 0x10136b52
