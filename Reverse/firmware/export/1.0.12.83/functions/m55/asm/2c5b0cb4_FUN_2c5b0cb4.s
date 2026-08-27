; FUN_2c5b0cb4 @ 0x2c5b0cb4 size=40
  push {r4,r5,r6,r7,lr}
  ldr r3,[0x2c5b0ee0]
  sub sp,#0x34
  ldr r2,[0x2c5b0ee4]
  mov r4,r0
  ldr r5,[0x2c5b0ee8]
  ldr r0,[0x2c5b0eec]
  str r5,[sp,#0x0]
  ldr r1,[0x2c5b0ef0]
  strd r2,r3,[sp,#0x4]
  mov.w r2,#0x160
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x2c]
  mov.w r0,#0x0
  movs r0,#0x4
  bl 0x2c62c82c
