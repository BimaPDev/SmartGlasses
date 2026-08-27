; FUN_2c58c99c @ 0x2c58c99c size=34
  push {r3,r4,r5,lr}
  ldr r4,[r0,#0x8]
  cbz r4,0x2c58c9ba
  mov r5,r1
  b 0x2c58c9aa
  ldr r4,[r4,#0x0]
  cbz r4,0x2c58c9ba
  ldr r0,[r4,#0x8]
  mov r1,r5
  bl 0x2c66b624
  cmp r0,#0x0
  bne 0x2c58c9a6
  ldr r0,[r4,#0x4]
  pop {r3,r4,r5,pc}
  movs r0,#0xff
  pop {r3,r4,r5,pc}
