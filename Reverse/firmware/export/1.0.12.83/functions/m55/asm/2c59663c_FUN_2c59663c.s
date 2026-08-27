; FUN_2c59663c @ 0x2c59663c size=36
  push {r3,lr}
  ldr r3,[r0,#0x3c]
  cbz r3,0x2c59664e
  ldr r2,[r0,#0x40]
  mov r0,r3
  ldr r1,[r2,#0x2c]
  bl 0x2c5479e0
  cbz r0,0x2c596652
  movs r0,#0x0
  pop {r3,pc}
  pop.w {r3,lr}
  b.w 0x2c59a678
  ldr r3,[0x2c59a680]
  ldrb r0,[r3,#0x0]
  bx lr
