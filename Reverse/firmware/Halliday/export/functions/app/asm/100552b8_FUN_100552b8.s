; FUN_100552b8 @ 0x100552b8 size=18
  push {r3,lr}
  ldr r3,[0x100552cc]
  ldr r0,[r3,#0x0]
  bl 0x1011a5a2
  cbz r0,0x100552c8
  movs r3,#0x20
  str r3,[r0,#0xc]
  pop {r3,pc}
