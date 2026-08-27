; FUN_2c4835dc @ 0x2c4835dc size=38
  push {r4,r5,lr}
  movs r0,#0x1
  sub sp,#0x14
  bl 0x2c471604
  ldr r5,[0x2c483614]
  mov r4,r0
  ldr r1,[0x2c483618]
  ldrb.w r0,[r0,#0x3d]
  ldr r3,[0x2c48361c]
  str r1,[sp,#0x0]
  movs r1,#0x78
  ldr r2,[0x2c483620]
  strd r5,r0,[sp,#0x4]
  movs r0,#0x4
  bl 0x2c673d88
