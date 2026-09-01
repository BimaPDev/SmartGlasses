; FUN_100552e8 @ 0x100552e8 size=26
  push {r3,lr}
  movs r1,#0x0
  ldr r0,[0x10055304]
  bl 0x10119dc2
  ldr r2,[0x10055308]
  ldr r3,[r2,#0x0]
  bic r3,r3,#0x3
  orr r3,r3,#0x10
  str r3,[r2,#0x0]
  pop {r3,pc}
