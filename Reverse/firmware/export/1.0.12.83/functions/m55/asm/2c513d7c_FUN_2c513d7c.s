; FUN_2c513d7c @ 0x2c513d7c size=32
  push {r4,lr}
  ldr r3,[r0,#0x0]
  sub sp,#0x8
  ldr r3,[r3,#0xc]
  blx r3
  ldr r1,[0x2c513da8]
  mov r4,r0
  ldr r3,[0x2c513dac]
  movs r0,#0x4
  movw r2,#0x4d1
  strd r1,r4,[sp,#0x0]
  ldr r1,[0x2c513db0]
  bl 0x2c62c82c
