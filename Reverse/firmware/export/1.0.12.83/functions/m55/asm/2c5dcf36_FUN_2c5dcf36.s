; FUN_2c5dcf36 @ 0x2c5dcf36 size=32
  push {r4,lr}
  ldr r4,[r0,#0x10]
  sub sp,#0x8
  mov r3,r4
  bl 0x2c602454
  ldr r4,[r4,#0xc]
  ldr r0,[0x2c5dcf60]
  movs r2,#0xba
  ldr r3,[0x2c5dcf64]
  ldr r1,[0x2c5dcf68]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
