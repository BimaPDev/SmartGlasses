; FUN_2c526cfc @ 0x2c526cfc size=30
  push {r4,lr}
  ldr r2,[0x2c526d2c]
  sub sp,#0x10
  ldr r4,[0x2c526d30]
  str r2,[sp,#0x0]
  movs r2,#0x22
  strb r0,[r4,#0x0]
  strh r1,[r4,#0x2]
  ldr r3,[0x2c526d34]
  strd r0,r1,[sp,#0x4]
  movs r0,#0x4
  ldr r1,[0x2c526d38]
  bl 0x2c62c82c
