; FUN_2c5ea720 @ 0x2c5ea720 size=28
  push {r3,lr}
  ldr r3,[0x2c5ea73c]
  ldr r3,[r3,#0x34]
  blx r3
  ldr r3,[r0,#0x0]
  cbz r3,0x2c5ea738
  movs r0,#0x0
  ldr r3,[r3,#0x0]
  adds r0,#0x1
  cmp r3,#0x0
  bne 0x2c5ea72e
  pop {r3,pc}
  mov r0,r3
  pop {r3,pc}
