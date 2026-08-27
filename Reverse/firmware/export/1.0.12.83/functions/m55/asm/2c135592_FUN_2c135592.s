; FUN_2c135592 @ 0x2c135592 size=26
  push {r3,r4,r5,lr}
  ldr r3,[0x2c1355ac]
  ldr r4,[0x2c1355b0]
  strb r2,[r3,#0x0]
  add.w r5,r4,#0x10
  ldr.w r3,[r4],#0x4
  cbz r3,0x2c1355a6
  blx r3
  cmp r4,r5
  bne 0x2c13559e
  pop {r3,r4,r5,pc}
