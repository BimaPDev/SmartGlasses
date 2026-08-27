; FUN_2c65f3fe @ 0x2c65f3fe size=134
  push {r4,r5,r6,r7,r8,r9,lr}
  sub sp,#0x14
  mov r4,r3
  mov r8,r0
  add r3,sp,#0xc
  add r0,sp,#0x8
  bl 0x2c651a4c
  add r3,sp,#0x4
  ldr r2,[sp,#0x30]
  mov r1,r4
  add r0,sp,#0xc
  bl 0x2c651a4c
  ldr.w r9,[sp,#0x8]
  ldr r5,[sp,#0xc]
  ldr.w r7,[r9,#-0xc]
  ldr.w r6,[r5,#-0xc]
  add.w r7,r9,r7, lsl #0x2
  add.w r6,r5,r6, lsl #0x2
  mov r2,r5
  mov r1,r9
  mov r0,r8
  bl 0x2c665a92
  mov r4,r0
  cbnz r0,0x2c65f460
  mov r0,r9
  bl 0x2c66ea0c
  add.w r9,r9,r0, lsl #0x2
  mov r0,r5
  bl 0x2c66ea0c
  cmp r7,r9
  add.w r4,r5,r0, lsl #0x2
  bne 0x2c65f474
  subs r4,r6,r4
  it ne
  mov.ne.w r4,#0xffffffff
  add r0,sp,#0xc
  bl 0x2c6515c0
  add r0,sp,#0x8
  bl 0x2c6515c0
  mov r0,r4
  add sp,#0x14
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  cmp r6,r4
  beq 0x2c65f480
  add.w r9,r9,#0x4
  adds r5,r4,#0x4
  b 0x2c65f432
  movs r4,#0x1
  b 0x2c65f460
