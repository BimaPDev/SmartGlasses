; FUN_2c504194 @ 0x2c504194 size=28
  push {r4,lr}
  ldr r4,[r0,#0x0]
  ldr r0,[r4,#0x0]
  cbz r0,0x2c5041aa
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c5041b0]
  ldr r3,[r3,#0x1c]
  cmp r3,r2
  bne 0x2c5041ac
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
  blx r3
  b 0x2c5041a6
