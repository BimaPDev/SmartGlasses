; FUN_2c607278 @ 0x2c607278 size=50
  push {r3,r4,r5,r6,r7,lr}
  ldr r7,[0x2c6072ac]
  mov r6,r0
  ldr r5,[0x2c6072b0]
  mov r4,r1
  ldr r3,[r7,#0x0]
  ldr r0,[r5,#0x0]
  adds r3,#0x1
  lsls r1,r3,#0x3
  str r3,[r7,#0x0]
  bl 0x2c62bebc
  ldr r1,[r7,#0x0]
  mvn r3,#0xe0000000
  str r0,[r5,#0x0]
  add r3,r1
  str.w r6,[r0,r3,lsl #0x3]
  mov r0,r1
  ldr r2,[r5,#0x0]
  add.w r3,r2,r3, lsl #0x3
  str r4,[r3,#0x4]
  pop {r3,r4,r5,r6,r7,pc}
