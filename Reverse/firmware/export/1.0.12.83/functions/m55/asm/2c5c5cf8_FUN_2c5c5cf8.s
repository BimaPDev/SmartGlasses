; FUN_2c5c5cf8 @ 0x2c5c5cf8 size=48
  push {r3,lr}
  bl 0x2c5c685c
  pop.w {r3,lr}
  b.w 0x2c5c6a50
  add.w r0,r0,#0x298
  b.w 0x2c5c896c
  push {r3,lr}
  bl 0x2c478b68
  cbz r0,0x2c5c8984
  ldr.w r3,[r0,#0xc0]
  blx r3
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
