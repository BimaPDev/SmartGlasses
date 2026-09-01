; FUN_100c6b18 @ 0x100c6b18 size=22
  push {r3,lr}
  ldr r0,[0x100c6b30]
  bl 0x10061fd0
  cbz r0,0x100c6b2c
  pop.w {r3,lr}
  ldr r0,[0x100c6b30]
  b.w 0x10061f54
  pop {r3,pc}
