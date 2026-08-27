; FUN_2c50f860 @ 0x2c50f860 size=170
  ldrb.w r3,[r0,#0x145]
  ldrb.w r2,[r0,#0x144]
  cmp r2,r3
  beq 0x2c50f890
  add.w r3,r0,r3, lsl #0x2
  push {r4,r5,r6,r7,r8,lr}
  ldr r5,[r3,#0x40]
  sub sp,#0x8
  mov r4,r0
  ldrsb.w r3,[r5,#0x90]
  cmp r3,#0x0
  bgt 0x2c50f892
  ldrsb.w r3,[r5,#0x124]
  cmp r3,#0x0
  bgt 0x2c50f8e6
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  bx lr
  mov r8,r5
  movs r6,#0x0
  movs r7,#0x94
  mul r7,r6,r7
  ldr r0,[r5,r7]
  cbz r0,0x2c50f8f4
  ldrb.w r3,[r4,#0x1d8]
  cmp r3,#0x24
  beq 0x2c50f8ee
  add.w r2,r4,r3, lsl #0x2
  adds r3,#0x1
  str.w r0,[r2,#0x148]
  strb.w r3,[r4,#0x1d8]
  movs r2,#0x54
  add.w r1,r8,#0x4
  mov r0,r8
  bl 0x2c673eb8
  movs r2,#0x94
  add.w r3,r6,r6, lsl #0x3
  movs r1,#0x0
  mla r2,r2,r6,r5
  add.w r6,r6,r3, lsl #0x2
  ldrb.w r3,[r2,#0x90]
  subs r3,#0x1
  sxtb r3,r3
  add r6,r3
  strb.w r3,[r2,#0x90]
  str.w r1,[r5,r6,lsl #0x2]
  b 0x2c50f88a
  add.w r8,r5,#0x94
  movs r6,#0x1
  b 0x2c50f896
  bl 0x2c62bea8
  b 0x2c50f8b6
  ldr r3,[0x2c50f910]
  movs r0,#0x3
  movw r2,#0x3d2
  ldr r1,[0x2c50f914]
  str r3,[sp,#0x4]
  ldr r3,[0x2c50f918]
  str r3,[sp,#0x0]
  ldr r3,[0x2c50f91c]
  bl 0x2c62c82c
