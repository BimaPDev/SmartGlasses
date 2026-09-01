; FUN_10081e6c @ 0x10081e6c size=28
  push {r4,lr}
  bl 0x1013c70e
  cbnz r0,0x10081e86
  pop.w {r4,lr}
  mov.w r2,#0xffffffff
  mov.w r3,#0xffffffff
  ldr r0,[0x10081e88]
  b.w 0x10113cfc
  pop {r4,pc}
