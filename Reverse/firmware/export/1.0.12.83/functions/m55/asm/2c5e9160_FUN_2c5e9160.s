; FUN_2c5e9160 @ 0x2c5e9160 size=28
  push {r3,lr}
  ldr r3,[0x2c5e917c]
  ldr r3,[r3,#0x34]
  blx r3
  ldr r3,[r0,#0x0]
  cbz r3,0x2c5e9178
  movs r0,#0x0
  ldr r3,[r3,#0x0]
  adds r0,#0x1
  cmp r3,#0x0
  bne 0x2c5e916e
  pop {r3,pc}
  mov r0,r3
  pop {r3,pc}
