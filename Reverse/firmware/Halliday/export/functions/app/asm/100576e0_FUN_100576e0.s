; FUN_100576e0 @ 0x100576e0 size=20
  push {r3,lr}
  mov.w r2,#0xffffffff
  mov.w r3,#0xffffffff
  ldr r0,[0x100576f4]
  bl 0x1011401c
  movs r0,#0x0
  pop {r3,pc}
