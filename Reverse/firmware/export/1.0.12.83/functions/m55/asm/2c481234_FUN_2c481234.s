; FUN_2c481234 @ 0x2c481234 size=36
  push {r4,lr}
  ldr r0,[0x2c48132c]
  sub sp,#0x20
  ldr r4,[0x2c481330]
  movw r1,#0x1dd
  ldr r3,[0x2c481334]
  ldr r2,[0x2c481338]
  strd r0,r4,[sp,#0x0]
  ldr r4,[0x2c48133c]
  movs r0,#0x4
  ldr r4,[r4,#0x0]
  str r4,[sp,#0x1c]
  mov.w r4,#0x0
  bl 0x2c673d88
