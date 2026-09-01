; FUN_100a3f70 @ 0x100a3f70 size=30
  push {r4,lr}
  ldr r4,[0x100a3f90]
  ldr r0,[r4,#0x0]
  adds r0,#0x68
  bl 0x10061f54
  movs r2,#0x0
  ldr r3,[r4,#0x0]
  movs r0,#0x85
  strb.w r2,[r3,#0x62]
  pop.w {r4,lr}
  b.w 0x100a1b0c
