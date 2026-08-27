; FUN_2c46f688 @ 0x2c46f688 size=40
  push {r4,r5,lr}
  movs r1,#0x9
  sub sp,#0xc
  movs r0,#0x0
  movs r5,#0x0
  bl 0x2c472518
  mov r4,r0
  ldr r0,[0x2c46f6d8]
  ldr.w r1,[r4,#-0x4]
  ldr r3,[0x2c46f6dc]
  ldr r2,[0x2c46f6e0]
  strd r0,r1,[sp,#0x0]
  mov.w r1,#0x228
  movs r0,#0x4
  bl 0x2c673d88
