; FUN_2c5d2a68 @ 0x2c5d2a68 size=34
  push {r4,lr}
  ldr r4,[r0,#0xc]
  cbz r4,0x2c5d2a88
  ldr.w r0,[r4,#0xf0]
  cbz r0,0x2c5d2a88
  movs r1,#0x1
  bl 0x2c606a28
  ldr.w r0,[r4,#0xf4]
  cbz r0,0x2c5d2a88
  pop.w {r4,lr}
  b.w 0x2c62be40
  pop {r4,pc}
