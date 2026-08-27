; FUN_2c504a0c @ 0x2c504a0c size=26
  push {r3,lr}
  bl 0x2c478b68
  cbz r0,0x2c504a24
  ldr.w r3,[r0,#0xc0]
  blx r3
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
