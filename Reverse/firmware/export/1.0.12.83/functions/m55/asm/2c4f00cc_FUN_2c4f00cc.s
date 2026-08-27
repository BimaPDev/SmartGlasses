; FUN_2c4f00cc @ 0x2c4f00cc size=28
  push {r4,lr}
  mov r4,r0
  bl 0x2c645794
  ldr r3,[0x2c4f00e8]
  mul r0,r4,r0
  umull r3,r0,r3,r0
  pop.w {r4,lr}
  lsrs r0,r0,#0x6
  b.w 0x2c6444fc
