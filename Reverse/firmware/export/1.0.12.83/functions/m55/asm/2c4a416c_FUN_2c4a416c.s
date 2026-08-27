; FUN_2c4a416c @ 0x2c4a416c size=42
  push {r4,lr}
  ldr r4,[0x2c4a4198]
  ldr r0,[r4,#0x0]
  cbz r0,0x2c4a4184
  bl 0x2c6448f0
  ldr r0,[r4,#0x0]
  movs r1,#0x64
  pop.w {r4,lr}
  b.w 0x2c6448b4
  mov r2,r0
  movs r1,#0x1
  ldr r0,[0x2c4a419c]
  bl 0x2c64418c
  str r0,[r4,#0x0]
  cmp r0,#0x0
  bne 0x2c4a4174
  pop {r4,pc}
