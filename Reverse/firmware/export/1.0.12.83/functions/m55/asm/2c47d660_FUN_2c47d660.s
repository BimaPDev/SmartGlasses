; FUN_2c47d660 @ 0x2c47d660 size=42
  push {r4,r5,r6,lr}
  ldr r2,[0x2c47d71c]
  sub sp,#0x80
  ldr r6,[0x2c47d720]
  mov r4,r0
  str r0,[sp,#0x8]
  mov r5,r1
  ldr r3,[0x2c47d724]
  movw r1,#0x149
  movs r0,#0x4
  strd r2,r6,[sp,#0x0]
  ldr r2,[0x2c47d728]
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x7c]
  mov.w r2,#0x0
  ldr r2,[0x2c47d72c]
  bl 0x2c673d88
