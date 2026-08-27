; FUN_140c40e8 @ 0x140c40e8 size=18
  push {r3,lr}
  ldr r3,[r0,#0x0]
  ldr.w r3,[r3,#-0x4]
  cmp r3,#0x0
  blt 0x140c40f8
  bl 0x140c40b8
  pop {r3,pc}
