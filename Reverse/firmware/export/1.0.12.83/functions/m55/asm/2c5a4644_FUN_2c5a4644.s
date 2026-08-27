; FUN_2c5a4644 @ 0x2c5a4644 size=36
  push {r4,r5,r6,r7,lr}
  ldr r5,[r0,#0x18]
  sub sp,#0x14
  ldr r6,[0x2c5a4680]
  mov r4,r0
  ldrsh.w r7,[r5,#0x12]
  movs r1,#0x27
  ldr r2,[0x2c5a4684]
  movs r0,#0x4
  str r7,[sp,#0x8]
  ldrsh.w r5,[r5,#0x10]
  ldr r3,[0x2c5a4688]
  strd r6,r5,[sp,#0x0]
  bl 0x2c673d88
