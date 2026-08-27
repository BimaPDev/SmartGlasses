; FUN_2c6491b6 @ 0x2c6491b6 size=34
  push {r4,lr}
  ldr r0,[r1,#0x4]
  bl 0x2c6684cc
  mov.w r3,#0x3e8
  mov r4,r0
  mul r0,r3,r0
  bl 0x2c6444fc
  mov r1,r4
  ldr r0,[0x2c6491dc]
  pop.w {r4,lr}
  b.w 0x2c648600
