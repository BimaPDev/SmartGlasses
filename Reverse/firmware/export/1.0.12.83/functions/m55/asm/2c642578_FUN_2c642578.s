; FUN_2c642578 @ 0x2c642578 size=38
  push {r4,r5,r6,lr}
  ldr r6,[0x2c642610]
  sub sp,#0x10
  mov r4,r0
  bl 0x2c48a2c4
  ldrb r3,[r6,#0x0]
  mov.w r2,#0x1ba
  ldr r1,[0x2c642614]
  str r4,[sp,#0x4]
  str r1,[sp,#0x0]
  ldr r1,[0x2c642618]
  strd r0,r3,[sp,#0x8]
  ldr r3,[0x2c64261c]
  movs r0,#0x4
  bl 0x2c62c82c
