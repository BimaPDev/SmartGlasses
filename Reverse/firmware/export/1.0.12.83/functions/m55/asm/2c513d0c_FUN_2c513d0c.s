; FUN_2c513d0c @ 0x2c513d0c size=32
  push {r4,lr}
  ldr r3,[r0,#0x0]
  sub sp,#0x8
  ldr r3,[r3,#0xc]
  blx r3
  ldr r1,[0x2c513d38]
  mov r4,r0
  ldr r3,[0x2c513d3c]
  movs r0,#0x4
  movw r2,#0x4d1
  strd r1,r4,[sp,#0x0]
  ldr r1,[0x2c513d40]
  bl 0x2c62c82c
