; FUN_2c477508 @ 0x2c477508 size=38
  push {r4,r5,lr}
  ldr r2,[0x2c477588]
  sub sp,#0x24
  mov r4,r0
  ldr r5,[0x2c47758c]
  ldr r0,[0x2c477590]
  ldr r3,[0x2c477594]
  str r5,[sp,#0x0]
  strd r2,r1,[sp,#0x4]
  ldr r2,[0x2c477598]
  movs r1,#0xaf
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x1c]
  mov.w r0,#0x0
  movs r0,#0x4
  bl 0x2c673d88
