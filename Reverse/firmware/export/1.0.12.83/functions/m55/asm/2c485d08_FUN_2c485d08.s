; FUN_2c485d08 @ 0x2c485d08 size=46
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  sub sp,#0xb8
  ldr r5,[0x2c485ff8]
  ldr.w r8,[0x2c486070]
  mov.w r1,#0x1de
  add r7,sp,#0x10
  ldr r3,[0x2c485ffc]
  movs r0,#0x4
  ldr r4,[0x2c486000]
  ldr r3,[r3,#0x0]
  str.w r3,[r7,#0xa4]
  mov.w r3,#0x0
  ldr r2,[0x2c486004]
  ldr r3,[0x2c486008]
  strd r8,r5,[sp,#0x0]
  bl 0x2c673d88
