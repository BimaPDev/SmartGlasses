; FUN_2c513ca4 @ 0x2c513ca4 size=30
  push {r4,lr}
  ldr r3,[r0,#0x0]
  sub sp,#0x8
  ldr r4,[0x2c513cc8]
  ldr r3,[r3,#0xc]
  blx r3
  ldr r3,[0x2c513ccc]
  movw r2,#0x4d5
  ldr r1,[0x2c513cd0]
  strd r4,r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
