; FUN_2c64c9d6 @ 0x2c64c9d6 size=24
  ldr r3,[r0,#0x0]
  lsls r3,r3,#0x1f
  bmi 0x2c64c9ea
  ldrb r3,[r0,#0x1]
  cbz r3,0x2c64c9e2
  udf #0xff
  movs r3,#0x1
  strb r3,[r0,#0x1]
  mov r0,r3
  bx lr
  movs r0,#0x0
  bx lr
