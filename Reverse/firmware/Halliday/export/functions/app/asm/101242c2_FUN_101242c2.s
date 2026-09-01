; FUN_101242c2 @ 0x101242c2 size=32
  push {r3,lr}
  subs r3,r0,#0x1
  adds r3,#0x3
  bhi 0x101242de
  mov.w r2,#0xffffffff
  mov.w r3,#0xffffffff
  bl 0x10113cfc
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
  movs r0,#0x1
  b 0x101242dc
