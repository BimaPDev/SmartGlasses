; FUN_2c485932 @ 0x2c485932 size=32
  push {r4,r5,lr}
  ldr r4,[0x2c485970]
  sub sp,#0x14
  it ne
  mov.ne r4,r3
  ldr r5,[0x2c485974]
  ldr r3,[0x2c485978]
  str r4,[sp,#0xc]
  ldr r4,[0x2c48597c]
  str r2,[sp,#0x4]
  str r0,[sp,#0x8]
  movs r0,#0x4
  ldr r2,[0x2c485980]
  str r5,[sp,#0x0]
  bl 0x2c673d88
