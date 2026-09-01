; FUN_10033ec4 @ 0x10033ec4 size=42
  push {r0,r1,r2,lr}
  mov r3,r1
  ldr r1,[0x10033ef0]
  mov r2,r0
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x4]
  mov.w r1,#0x0
  ldr r1,[0x10033ef0]
  ldr r0,[r1,#0x0]
  ldr r1,[sp,#0x4]
  eors r0,r1
  beq 0x10033ee2
  bl 0x1013cdc0
  ldr r0,[0x10033ef4]
  add sp,#0xc
  pop.w lr
  b.w 0x10113cfc
