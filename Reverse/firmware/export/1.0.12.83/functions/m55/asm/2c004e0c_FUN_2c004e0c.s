; FUN_2c004e0c @ 0x2c004e0c size=120
  push {r3,r4,r5,lr}
  mov r4,r0
  cbz r1,0x2c004e32
  bl 0x2c003b5c
  ldr r2,[0x2c004e84]
  ldr r3,[0x2c004e88]
  mov r0,r4
  ldrb r2,[r2,r4]
  ldr.w r3,[r3,r2,lsl #0x2]
  ldrb r1,[r3,#0x5]
  bl 0x2c003b20
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x2c003d6c
  bl 0x2c003b40
  ldr r2,[0x2c004e84]
  ldr r3,[0x2c004e88]
  mov r0,r4
  ldrb r2,[r2,r4]
  ldr.w r3,[r3,r2,lsl #0x2]
  ldrb r1,[r3,#0x6]
  bl 0x2c003b20
  ldr r3,[0x2c004e8c]
  ldr.w r3,[r3,r4,lsl #0x2]
  lsls r2,r3,#0x1a
  bmi 0x2c004e80
  lsls r3,r3,#0x1c
  bpl 0x2c004e28
  movs r5,#0xbb
  mov r0,r4
  bl 0x2c003db0
  mov r0,r4
  movs r1,#0x2
  bl 0x2c003c60
  mov r1,r5
  mov r0,r4
  movs r2,#0x0
  bl 0x2c003c84
  mov r0,r4
  bl 0x2c003db0
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x2c003d6c
  movs r5,#0xeb
  b 0x2c004e58
