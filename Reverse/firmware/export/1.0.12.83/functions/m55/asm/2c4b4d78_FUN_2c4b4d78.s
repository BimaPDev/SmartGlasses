; FUN_2c4b4d78 @ 0x2c4b4d78 size=148
  push {r4,r5,r6,r7,r8,lr}
  mov r7,r3
  sub sp,#0x8
  ldr r4,[0x2c4b4e0c]
  mov r3,r2
  mov r8,r0
  mov r5,r1
  mov r6,r2
  str r7,[sp,#0x0]
  mov r2,r1
  mov r1,r0
  ldr r0,[0x2c4b4e10]
  bl 0x2c648600
  bl 0x2c498c40
  add.w r3,r4,#0x4b000
  ldr r3,[r3,#0x18]
  cmp r3,r4
  beq 0x2c4b4df2
  cmp.w r8,#0x0
  add.w r1,r5,r5, lsl #0x2
  it lt
  add.lt.w r8,r8,#0x1
  lsls r3,r1,#0x6
  add.w r3,r3,r8, asr #0x1
  add r4,r3
  cbz r7,0x2c4b4de8
  cmp r6,#0x0
  mov.w r5,#0x0
  ldr.w r8,[0x2c4b4e18]
  it lt
  add.lt r6,#0x1
  asrs r6,r6,#0x1
  movs r1,#0x1
  mov r3,r4
  mov r2,r6
  mov r0,r8
  add r5,r1
  bl 0x2c6743a8
  movs r0,#0xf
  add.w r4,r4,#0x140
  bl 0x2c6444fc
  cmp r5,r7
  bne 0x2c4b4dcc
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,lr}
  b.w 0x2c498c58
  cmp.w r8,#0x0
  add.w r1,r5,r5, lsl #0x2
  ldr r3,[0x2c4b4e14]
  it lt
  add.lt.w r8,r8,#0x1
  lsls r4,r1,#0x6
  add.w r4,r4,r8, asr #0x1
  add r4,r3
  b 0x2c4b4dba
