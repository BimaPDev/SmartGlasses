; FUN_2c5bfe30 @ 0x2c5bfe30 size=26
  push {r3,lr}
  bl 0x2c478b68
  cbz r0,0x2c5bfe48
  ldr.w r3,[r0,#0xe4]
  blx r3
  sub.w r0,r0,#0x6
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
