; FUN_2c46a280 @ 0x2c46a280 size=38
  push {r3,r4,r5,lr}
  ldr r4,[r0,#0x20]
  mov r5,r0
  cbz r4,0x2c46a296
  ldr r3,[r5,#0x2c]
  mov r0,r4
  cbz r3,0x2c46a290
  blx r3
  ldr r4,[r4,#0x8]
  cmp r4,#0x0
  bne 0x2c46a288
  ldr r0,[r5,#0x28]
  bl 0x2c669588
  mov r0,r5
  pop.w {r3,r4,r5,lr}
  b.w 0x2c669588
