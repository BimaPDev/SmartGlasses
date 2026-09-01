; FUN_10081e54 @ 0x10081e54 size=20
  push {r3,lr}
  bl 0x1013c70e
  cbnz r0,0x10081e66
  pop.w {r3,lr}
  ldr r0,[0x10081e68]
  b.w 0x10113e2c
  pop {r3,pc}
