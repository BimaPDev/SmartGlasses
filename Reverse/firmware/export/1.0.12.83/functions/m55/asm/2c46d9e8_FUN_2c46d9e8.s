; FUN_2c46d9e8 @ 0x2c46d9e8 size=22
  push {r4,lr}
  bl 0x2c46de2c
  ldr r3,[0x2c46da00]
  ldr r3,[r3,#0x0]
  cbz r3,0x2c46d9fc
  movs r0,#0x3
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
