; FUN_2c5fe700 @ 0x2c5fe700 size=38
  ldr r3,[0x2c5fe72c]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x2
  beq 0x2c5fe728
  ldr r0,[0x2c5fe730]
  mov.w r1,#0x114
  ldr r3,[0x2c5fe734]
  ldr r2,[0x2c5fe738]
  push {r4,lr}
  ldr r4,[0x2c5fe73c]
  sub sp,#0x8
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
  movs r0,#0x1
  bx lr
