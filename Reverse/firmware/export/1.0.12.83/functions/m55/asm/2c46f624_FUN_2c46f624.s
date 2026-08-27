; FUN_2c46f624 @ 0x2c46f624 size=42
  push {r4,r5,lr}
  movs r1,#0x9
  sub sp,#0xc
  movs r0,#0x0
  bl 0x2c47245c
  ldr r1,[0x2c46f678]
  ldr.w r4,[r0,#-0x4]
  mov r5,r0
  ldr r3,[0x2c46f67c]
  movs r0,#0x4
  ldr r2,[0x2c46f680]
  strd r1,r4,[sp,#0x0]
  and r4,r4,#0x3
  movw r1,#0x21b
  bl 0x2c673d88
