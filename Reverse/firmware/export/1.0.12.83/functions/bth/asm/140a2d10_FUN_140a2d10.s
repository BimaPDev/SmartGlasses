; FUN_140a2d10 @ 0x140a2d10 size=18
  push {r3,lr}
  ldr r0,[0x140a2d24]
  ldr r3,[0x140a2d28]
  cmp r3,r0
  bcs 0x140a2d1e
  subs r0,r0,r3
  pop {r3,pc}
  bl 0x140a2ce8
