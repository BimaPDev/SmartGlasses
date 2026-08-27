; FUN_2c4e4fb8 @ 0x2c4e4fb8 size=24
  push {r3,r4,r5,lr}
  ldr r5,[0x2c4e4fd0]
  movs r4,#0x8
  ldr.w r0,[r5],#0x4
  cbz r0,0x2c4e4fca
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x40]
  blx r3
  subs r4,#0x1
  bne 0x2c4e4fbe
  pop {r3,r4,r5,pc}
