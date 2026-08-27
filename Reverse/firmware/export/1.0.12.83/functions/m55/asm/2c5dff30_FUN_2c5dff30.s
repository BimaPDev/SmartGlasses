; FUN_2c5dff30 @ 0x2c5dff30 size=42
  push {r4,r5,r6,r7,lr}
  mov r4,r0
  ldr r5,[r0,#0x8]
  sub sp,#0x14
  ldrb.w r0,[r0,#0x21]
  ldr r7,[0x2c5dffc0]
  movw r2,#0x227
  str r0,[sp,#0xc]
  ldrb.w r0,[r5,#0x4a]
  ldr r6,[r4,#0xc]
  ldr r3,[0x2c5dffc4]
  str r0,[sp,#0x8]
  movs r0,#0x4
  ldr r1,[0x2c5dffc8]
  strd r7,r6,[sp,#0x0]
  bl 0x2c62c82c
