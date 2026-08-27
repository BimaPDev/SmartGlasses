; FUN_2c46c95c @ 0x2c46c95c size=112
  push {r4,r5,r6,r7,r8,lr}
  adds r7,r1,#0x1
  ldr r3,[r0,#0x8]
  mov r4,r0
  mov r5,r1
  cmp r7,r3
  mov r6,r2
  bge 0x2c46c996
  ldr r3,[r4,#0x0]
  lsl.w r8,r5,#0x2
  ldr.w r0,[r3,r5,lsl #0x2]
  add.w r3,r3,r5, lsl #0x2
  cbz r0,0x2c46c986
  ldr r3,[r4,#0xc]
  blx r3
  ldr r3,[r4,#0x0]
  add r3,r8
  str r6,[r3,#0x0]
  movs r0,#0x0
  ldr r3,[r4,#0x4]
  cmp r3,r5
  bgt 0x2c46c992
  str r7,[r4,#0x4]
  pop.w {r4,r5,r6,r7,r8,pc}
  lsl.w r8,r3,#0x1
  ldr r0,[r0,#0x0]
  cmp r8,r7
  it lt
  mov.lt r8,r7
  lsl.w r1,r8,#0x2
  bl 0x2c66b218
  cbz r0,0x2c46c9c6
  ldr r2,[r4,#0x8]
  movs r1,#0x0
  str r0,[r4,#0x0]
  add.w r0,r0,r2, lsl #0x2
  sub.w r2,r8,r2
  lsls r2,r2,#0x2
  bl 0x2c674268
  str.w r8,[r4,#0x8]
  b 0x2c46c96e
  mov.w r0,#0xffffffff
  b 0x2c46c992
