; FUN_2c478f58 @ 0x2c478f58 size=22
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c478f6c
  ldr.w r3,[r0,#0xe8]
  movs r0,#0x1
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
