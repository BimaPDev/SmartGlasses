; FUN_2c5dfe90 @ 0x2c5dfe90 size=42
  push {r4,r5,r6,lr}
  ldr r4,[r0,#0x18]
  sub sp,#0x10
  ldr r6,[0x2c5dff20]
  movw r2,#0x20a
  ldr r5,[r4,#0x8]
  ldrb.w r0,[r4,#0x21]
  ldr r3,[0x2c5dff24]
  str r0,[sp,#0xc]
  ldrb.w r0,[r5,#0x4a]
  ldr r1,[0x2c5dff28]
  str r0,[sp,#0x8]
  ldr r0,[r4,#0xc]
  strd r6,r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
