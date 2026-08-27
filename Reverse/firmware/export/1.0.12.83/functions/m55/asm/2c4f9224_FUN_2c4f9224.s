; FUN_2c4f9224 @ 0x2c4f9224 size=60
  push {r4,r5,r6,r7,r8,lr}
  subs r6,r3,#0x1
  sub sp,#0x38
  ldr r2,[0x2c4f93f4]
  mov r5,r3
  cmp r6,#0x1f
  mov r4,r0
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x34]
  mov.w r2,#0x0
  mov r8,r1
  bhi 0x2c4f92e6
  ldr r3,[0x2c4f93f8]
  ldr.w r3,[r3,r6,lsl #0x2]
  ldr r7,[0x2c4f93fc]
  movs r1,#0x67
  str r3,[sp,#0x8]
  movs r0,#0x4
  ldr r3,[0x2c4f9400]
  ldr r2,[0x2c4f9404]
  str r3,[sp,#0x0]
  str r7,[sp,#0x4]
  ldr r3,[0x2c4f9408]
  bl 0x2c673d88
  ldr r3,[0x2c4f9418]
  b 0x2c4f9246
