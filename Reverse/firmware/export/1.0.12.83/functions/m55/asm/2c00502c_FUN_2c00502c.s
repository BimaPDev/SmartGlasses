; FUN_2c00502c @ 0x2c00502c size=70
  push {r4,lr}
  mov r4,r0
  bl 0x2c0040c4
  ldr r3,[0x2c005074]
  mov r2,r0
  mov r0,r4
  str.w r2,[r3,r4,lsl #0x2]
  bl 0x2c003d6c
  ldr r3,[0x2c005078]
  ldrb r1,[r3,r4]
  cbnz r1,0x2c005056
  ldr r3,[0x2c00507c]
  ldr.w r3,[r3,r4,lsl #0x2]
  lsls r3,r3,#0x13
  bmi 0x2c005066
  movs r0,#0x0
  pop {r4,pc}
  mov r0,r4
  bl 0x2c003de8
  ldr r3,[0x2c00507c]
  ldr.w r3,[r3,r4,lsl #0x2]
  lsls r3,r3,#0x13
  bpl 0x2c005052
  mov r0,r4
  movs r1,#0x0
  bl 0x2c004e0c
  movs r0,#0x0
  pop {r4,pc}
