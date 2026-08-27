; FUN_2c5ff18c @ 0x2c5ff18c size=28
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  b 0x2c5ff196
  str r0,[r4,#0x0]
  ldr r3,[r0,#0x8]
  mov r1,r4
  cbz r3,0x2c5ff1a0
  blx r3
  ldr r0,[r4,#0x0]
  ldr r0,[r0,#0x0]
  cmp r0,#0x0
  bne 0x2c5ff194
  pop {r4,pc}
