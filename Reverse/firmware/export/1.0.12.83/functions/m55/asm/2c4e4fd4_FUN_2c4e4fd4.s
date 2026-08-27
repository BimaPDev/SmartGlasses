; FUN_2c4e4fd4 @ 0x2c4e4fd4 size=24
  push {r3,r4,r5,lr}
  ldr r5,[0x2c4e4fec]
  movs r4,#0x8
  ldr.w r0,[r5],#0x4
  cbz r0,0x2c4e4fe6
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x48]
  blx r3
  subs r4,#0x1
  bne 0x2c4e4fda
  pop {r3,r4,r5,pc}
