; FUN_2c4835c4 @ 0x2c4835c4 size=24
  push {r3,lr}
  movs r0,#0x1
  bl 0x2c471604
  ldrb.w r0,[r0,#0x3d]
  sub.w r0,r0,#0x3
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
