; FUN_100552d0 @ 0x100552d0 size=18
  push {r3,lr}
  ldr r3,[0x100552e4]
  ldr r0,[r3,#0x0]
  bl 0x1011a5a2
  cbz r0,0x100552e0
  movs r3,#0x40
  str r3,[r0,#0xc]
  pop {r3,pc}
