; FUN_2c4880f0 @ 0x2c4880f0 size=38
  push {r3,lr}
  bl 0x2c48a408
  ldr r3,[0x2c488118]
  mov r2,r0
  ldr r0,[0x2c48811c]
  smull r1,r3,r3,r2
  asrs r1,r2,#0x1f
  rsb r1,r1,r3, asr #0x2
  add.w r3,r1,r1, lsl #0x2
  sub.w r2,r2,r3, lsl #0x1
  pop.w {r3,lr}
  b.w 0x2c648600
