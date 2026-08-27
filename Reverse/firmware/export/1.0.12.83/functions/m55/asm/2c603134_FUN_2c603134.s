; FUN_2c603134 @ 0x2c603134 size=58
  push {r3,r4,r5,r6,r7,lr}
  mov r7,r0
  bl 0x2c6041fc
  cbz r0,0x2c60316c
  mov r6,r0
  movs r5,#0x0
  ldr r3,[r7,#0x8]
  ldr r3,[r3,#0x0]
  ldr.w r4,[r3,r5,lsl #0x2]
  adds r5,#0x1
  mov r0,r4
  bl 0x2c607df0
  movs r2,#0x0
  movs r1,#0x2a
  mov r0,r4
  bl 0x2c602340
  mov r0,r4
  bl 0x2c607df0
  mov r0,r4
  bl 0x2c603134
  cmp r6,r5
  bne 0x2c603142
  pop {r3,r4,r5,r6,r7,pc}
