; FUN_2c63e4a8 @ 0x2c63e4a8 size=38
  push {r4,r5,r6,lr}
  ldr r1,[0x2c63e52c]
  sub sp,#0x10
  ldr r5,[0x2c63e530]
  ldrb r1,[r1,#0x0]
  ldrb r0,[r5,#0x0]
  ldr r2,[0x2c63e534]
  ldr r4,[0x2c63e538]
  ldr r3,[0x2c63e53c]
  str r2,[sp,#0x0]
  mov.w r2,#0x102
  ldr r6,[0x2c63e540]
  strd r1,r0,[sp,#0x4]
  ldr r1,[0x2c63e544]
  movs r0,#0x4
  bl 0x2c62c82c
