; FUN_10119e92 @ 0x10119e92 size=24
  mov r2,r1
  push {r3,lr}
  movs r1,#0x1
  bl 0x10119e76
  adds r2,#0x1
  subs r0,r2,r0
  clz r0,r0
  rsb.w r0,r0,#0x1f
  pop {r3,pc}
