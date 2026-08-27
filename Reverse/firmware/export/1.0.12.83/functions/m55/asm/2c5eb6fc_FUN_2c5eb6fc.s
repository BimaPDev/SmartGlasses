; FUN_2c5eb6fc @ 0x2c5eb6fc size=32
  push {r3,r4,r5,lr}
  ldr r5,[0x2c5eb71c]
  ldr r3,[r5,#0x0]
  ldr r4,[r3,#0x54]
  cbz r4,0x2c5eb714
  mov r0,r4
  ldr r4,[r4,#0x54]
  bl 0x2c62bea8
  cmp r4,#0x0
  bne 0x2c5eb706
  ldr r3,[r5,#0x0]
  movs r2,#0x0
  str r2,[r3,#0x54]
  strb r2,[r5,#0x4]
  pop {r3,r4,r5,pc}
