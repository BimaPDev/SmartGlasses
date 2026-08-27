; FUN_2c5b78c4 @ 0x2c5b78c4 size=40
  push {r4,lr}
  ldr r2,[r1,#0x0]
  mov r4,r0
  sub sp,#0x8
  ldr r3,[r2,#0x4]
  subs r3,#0x1
  str r3,[r2,#0x4]
  ldr r0,[r0,#0x0]
  bl 0x2c5e4068
  ldr r4,[r4,#0x0]
  ldr r0,[0x2c5b78f0]
  movs r2,#0x39
  ldr r3,[0x2c5b78f4]
  ldr r1,[0x2c5b78f8]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
