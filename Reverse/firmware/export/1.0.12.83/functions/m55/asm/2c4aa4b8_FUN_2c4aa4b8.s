; FUN_2c4aa4b8 @ 0x2c4aa4b8 size=34
  push {r4,lr}
  ldr r4,[0x2c4aa4dc]
  ldr r3,[r4,#0x0]
  cbz r3,0x2c4aa4c2
  pop {r4,pc}
  mov.w r1,#0x1400
  ldr r0,[0x2c4aa4e0]
  bl 0x2c4c2c50
  str r0,[r4,#0x0]
  cmp r0,#0x0
  bne 0x2c4aa4c0
  ldr r1,[0x2c4aa4e4]
  ldr r0,[0x2c4aa4e8]
  bl 0x2c673ca8
