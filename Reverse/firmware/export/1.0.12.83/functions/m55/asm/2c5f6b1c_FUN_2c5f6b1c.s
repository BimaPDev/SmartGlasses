; FUN_2c5f6b1c @ 0x2c5f6b1c size=34
  push {r3,r4,r5,lr}
  mov r5,r1
  ldr r1,[r0,#0xc]
  mov r4,r0
  adds r1,#0x1
  bl 0x2c5f6990
  ldr r3,[r4,#0xc]
  ldr r2,[r4,#0x4]
  adds r1,r3,#0x1
  str r1,[r4,#0xc]
  movs r1,#0x0
  strb r5,[r2,r3]
  ldr r2,[r4,#0x4]
  ldr r3,[r4,#0xc]
  strb r1,[r2,r3]
  pop {r3,r4,r5,pc}
