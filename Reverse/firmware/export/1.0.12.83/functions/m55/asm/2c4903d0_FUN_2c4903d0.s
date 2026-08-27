; FUN_2c4903d0 @ 0x2c4903d0 size=60
  push {r3,r4,r5,r6,r7,lr}
  mov r6,r0
  cbz r0,0x2c490402
  movs r5,#0x0
  ldr r7,[0x2c49040c]
  mov r4,r5
  b 0x2c4903e4
  adds r4,#0x1
  cmp r4,#0x15
  beq 0x2c490406
  ldr.w r1,[r7,r5,lsl #0x2]
  mov r0,r6
  adds r5,#0x6
  bl 0x2c66b624
  cmp r0,#0x0
  bne 0x2c4903de
  ldr r3,[0x2c490410]
  add.w r4,r4,r4, lsl #0x1
  add.w r6,r3,r4, lsl #0x2
  str.w r0,[r3,r4,lsl #0x2]
  mov r0,r6
  pop {r3,r4,r5,r6,r7,pc}
  movs r6,#0x0
  mov r0,r6
  pop {r3,r4,r5,r6,r7,pc}
