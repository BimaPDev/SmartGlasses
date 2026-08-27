; FUN_2c631fae @ 0x2c631fae size=36
  push {r3,r4,r5,lr}
  mov r4,r1
  cbz r0,0x2c631fbc
  bl 0x2c6043d8
  movs r3,#0x0
  str r3,[r4,#0x24]
  ldrb.w r3,[r4,#0x3c]
  ands r5,r3,#0x10
  beq 0x2c631fc8
  pop {r3,r4,r5,pc}
  ldr r0,[r4,#0x30]
  bl 0x2c62bea8
  str r5,[r4,#0x30]
  pop {r3,r4,r5,pc}
