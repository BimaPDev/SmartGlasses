; FUN_2c5df5b0 @ 0x2c5df5b0 size=70
  push {r4,r5,r6,lr}
  ldr r5,[0x2c5df5f0]
  mov r4,r1
  rsb r1,r1,r1, lsl #0x8
  movs r2,#0x0
  mov r6,r0
  smull r12,r3,r5,r1
  asrs r1,r1,#0x1f
  rsb r1,r1,r3, asr #0x5
  uxtb r1,r1
  bl 0x2c606e74
  movs r1,#0x1a
  mov r0,r6
  movs r2,#0x0
  mul r4,r1,r4
  smull r3,r1,r5,r4
  asrs r4,r4,#0x1f
  rsb r1,r4,r1, asr #0x5
  adds r1,#0xe6
  pop.w {r4,r5,r6,lr}
  sxth r1,r1
  b.w 0x2c606ce8
  mov r12,r1
  mov r3,r2
  movs r1,#0x6c
  mov r2,r12
