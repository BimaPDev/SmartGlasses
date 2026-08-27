; FUN_2c513d44 @ 0x2c513d44 size=32
  push {r4,lr}
  ldr r3,[r0,#0x0]
  sub sp,#0x8
  ldr r3,[r3,#0xc]
  blx r3
  ldr r1,[0x2c513d70]
  mov r4,r0
  ldr r3,[0x2c513d74]
  movs r0,#0x4
  movw r2,#0x4d1
  strd r1,r4,[sp,#0x0]
  ldr r1,[0x2c513d78]
  bl 0x2c62c82c
