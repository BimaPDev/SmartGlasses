; FUN_2c5e6084 @ 0x2c5e6084 size=82
  push {r4,r5,r6,r7,lr}
  sub sp,#0xc
  ldr r1,[0x2c5e60d8]
  str r0,[sp,#0x4]
  add r0,sp,#0x4
  bl 0x2c66c5b6
  cbz r0,0x2c5e60d0
  mov r6,r0
  movs r5,#0x0
  ldr r1,[0x2c5e60dc]
  ldr r7,[0x2c5e60e0]
  b 0x2c5e60a8
  adds r5,#0x1
  cmp r5,#0x25
  beq 0x2c5e60c8
  ldr.w r1,[r7,r5,lsl #0x3]
  mov r0,r6
  bl 0x2c66b624
  mov r4,r0
  cmp r0,#0x0
  bne 0x2c5e609e
  ldr r3,[0x2c5e60e0]
  add.w r5,r3,r5, lsl #0x3
  ldr r3,[r5,#0x4]
  cbz r3,0x2c5e60c2
  ldr r0,[sp,#0x4]
  blx r3
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  movs r4,#0x0
  mov r0,r4
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  mov.w r4,#0xffffffff
  b 0x2c5e60c2
