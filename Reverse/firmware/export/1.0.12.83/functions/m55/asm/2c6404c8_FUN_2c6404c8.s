; FUN_2c6404c8 @ 0x2c6404c8 size=32
  push {r4,r5,r6,lr}
  ldr r6,[0x2c640670]
  sub sp,#0x10
  ldr r3,[0x2c640674]
  mov r4,r1
  ldr r2,[r6,#0x0]
  mov r5,r0
  str r3,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c640678]
  strd r1,r2,[sp,#0x4]
  movs r2,#0xec
  ldr r1,[0x2c64067c]
  bl 0x2c62c82c
