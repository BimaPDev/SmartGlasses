; FUN_2c5fb4d8 @ 0x2c5fb4d8 size=56
  push {r4,r5,lr}
  mov r5,r0
  sub sp,#0xc
  movs r1,#0x1
  bl 0x2c606a28
  mov r0,r5
  bl 0x2c6041fc
  cbz r0,0x2c5fb50c
  subs r4,r0,#0x1
  bmi 0x2c5fb50c
  ldr r3,[r5,#0x8]
  movs r1,#0x1
  ldr r3,[r3,#0x0]
  ldr.w r0,[r3,r4,lsl #0x2]
  subs r4,#0x1
  str r0,[sp,#0x4]
  bl 0x2c606a28
  ldr r0,[sp,#0x4]
  bl 0x2c5fb4d8
  adds r3,r4,#0x1
  bne 0x2c5fb4f0
  add sp,#0xc
  pop {r4,r5,pc}
