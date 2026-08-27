; FUN_2c48b130 @ 0x2c48b130 size=42
  push {r4,r5,r6,r7,lr}
  ldrb r1,[r3,#0x0]
  sub sp,#0x3c
  ldr r5,[0x2c48b250]
  mov r4,r0
  ldr r3,[0x2c48b254]
  str r5,[sp,#0x0]
  strd r0,r1,[sp,#0x4]
  ldr r1,[0x2c48b258]
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x34]
  mov.w r1,#0x0
  str r0,[r2,#0x0]
  movw r1,#0x2d1
  ldr r2,[0x2c48b25c]
  movs r0,#0x4
  bl 0x2c673d88
