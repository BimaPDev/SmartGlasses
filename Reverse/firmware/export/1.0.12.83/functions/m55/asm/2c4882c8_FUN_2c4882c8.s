; FUN_2c4882c8 @ 0x2c4882c8 size=40
  push {r4,lr}
  ldr r4,[0x2c4882f0]
  movs r2,#0x0
  movs r1,#0x1
  ldr r0,[0x2c4882f4]
  bl 0x2c64418c
  str r0,[r4,#0x0]
  cbz r0,0x2c4882ee
  ldr r0,[0x2c4882f8]
  bl 0x2c648680
  ldr r0,[r4,#0x0]
  mov.w r1,#0x3e8
  pop.w {r4,lr}
  b.w 0x2c6448b4
  pop {r4,pc}
