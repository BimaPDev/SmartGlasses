; FUN_2c48adc0 @ 0x2c48adc0 size=40
  push {r4,r5,r6,lr}
  sub sp,#0x38
  ldr r6,[0x2c48af28]
  mov r5,r1
  mov r4,r0
  str r6,[sp,#0x0]
  ldr r3,[0x2c48af2c]
  ldr r2,[0x2c48af30]
  strd r0,r1,[sp,#0x4]
  ldr r1,[0x2c48af34]
  movs r0,#0x4
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x34]
  mov.w r1,#0x0
  mov.w r1,#0x23c
  bl 0x2c673d88
