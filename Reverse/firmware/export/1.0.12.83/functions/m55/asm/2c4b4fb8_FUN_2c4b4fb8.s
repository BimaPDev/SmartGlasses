; FUN_2c4b4fb8 @ 0x2c4b4fb8 size=22
  push {r3,r4,r5,lr}
  ldr r4,[0x2c4b4fd0]
  add.w r5,r4,#0x10
  ldr.w r3,[r4],#0x4
  cbz r3,0x2c4b4fc8
  blx r3
  cmp r4,r5
  bne 0x2c4b4fc0
  pop {r3,r4,r5,pc}
