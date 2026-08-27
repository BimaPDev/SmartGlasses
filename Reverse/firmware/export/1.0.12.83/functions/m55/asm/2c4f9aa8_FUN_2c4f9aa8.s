; FUN_2c4f9aa8 @ 0x2c4f9aa8 size=36
  push {r4,lr}
  ldr r4,[0x2c4f9acc]
  cbnz r0,0x2c4f9ab8
  ldrb r3,[r4,#0x0]
  cbz r3,0x2c4f9ab8
  ldr r3,[0x2c4f9ad0]
  ldrb r3,[r3,#0x0]
  cbnz r3,0x2c4f9abe
  movs r3,#0x0
  strb r3,[r4,#0x0]
  pop {r4,pc}
  ldr r3,[0x2c4f9ad4]
  mov r1,r0
  movs r2,#0x6
  ldrb r3,[r3,#0x0]
  bl 0x2c4c4030
  b 0x2c4f9ab8
