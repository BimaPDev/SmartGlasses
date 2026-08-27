; FUN_14079aa8 @ 0x14079aa8 size=40
  push {r3,lr}
  cbz r1,0x14079abe
  add.w r1,r0,#0x60
  adds r0,#0x10
  bl 0x14074b54
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
  add.w r1,r0,#0x7c
  adds r0,#0x10
  bl 0x14074b54
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
