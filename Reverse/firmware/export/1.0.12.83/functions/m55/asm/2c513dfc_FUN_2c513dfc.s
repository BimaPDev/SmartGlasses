; FUN_2c513dfc @ 0x2c513dfc size=32
  push {r4,lr}
  ldr r3,[r0,#0x0]
  sub sp,#0x8
  mov r4,r0
  ldr r3,[r3,#0xc]
  blx r3
  ldr r1,[0x2c513e34]
  ldr r3,[0x2c513e38]
  movw r2,#0x4d5
  strd r1,r0,[sp,#0x0]
  ldr r1,[0x2c513e3c]
  movs r0,#0x4
  bl 0x2c62c82c
