; FUN_2c005088 @ 0x2c005088 size=78
  push {r4,lr}
  mov r4,r0
  bl 0x2c003d6c
  ldr r3,[0x2c0050d8]
  ldr.w r3,[r3,r4,lsl #0x2]
  lsls r3,r3,#0x13
  bmi 0x2c0050b6
  mov r0,r4
  bl 0x2c003d24
  mov r0,r4
  bl 0x2c004de0
  ldr r3,[0x2c0050dc]
  mov r0,r4
  ldr.w r1,[r3,r4,lsl #0x2]
  bl 0x2c0040e8
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  bl 0x2c003b5c
  ldr r2,[0x2c0050e0]
  ldr r3,[0x2c0050e4]
  mov r0,r4
  ldrb r2,[r2,r4]
  ldr.w r3,[r3,r2,lsl #0x2]
  ldrb r1,[r3,#0x5]
  bl 0x2c003b20
  mov r0,r4
  bl 0x2c003d6c
  b 0x2c00509a
