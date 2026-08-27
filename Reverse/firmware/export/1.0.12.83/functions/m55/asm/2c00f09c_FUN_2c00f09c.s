; FUN_2c00f09c @ 0x2c00f09c size=38
  mov.w r1,#0x310
  movw r0,#0x2338
  bl 0x2c008f74
  movs r0,#0x3c
  bl 0x2c013884
  b 0x2c00ebd2
  subs r3,r5,#0x4
  uxth r5,r3
  lsls r1,r5,#0x4
  uxtb r1,r1
  orr r1,r1,#0xd500
  b 0x2c00f082
  bl 0x2c0084a8
