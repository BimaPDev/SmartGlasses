; FUN_1013cd58 @ 0x1013cd58 size=42
  push {r3,r4,r5,lr}
  movw r4,#0x3e7
  mov r12,r0
  movs r5,#0x0
  adds r0,r4,r0
  mov.w r2,#0x3e8
  mov.w r3,#0x0
  adc.w r1,r5,r12, asr #0x1f
  bl 0x10004238
  asrs r1,r0,#0x1f
  bl 0x101152fc
  mov.w r3,#0x3e8
  muls r0,r3
  pop {r3,r4,r5,pc}
