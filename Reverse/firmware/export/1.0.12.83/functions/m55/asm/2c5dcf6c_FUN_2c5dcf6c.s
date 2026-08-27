; FUN_2c5dcf6c @ 0x2c5dcf6c size=146
  push {r4,r5,r6,lr}
  ldr r3,[0x2c5dd000]
  sub sp,#0x8
  mov r4,r1
  mov r5,r0
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x2c5ff4d8
  mov r1,sp
  bl 0x2c5ff63c
  ldrsh.w r2,[sp,#0x2]
  cbz r2,0x2c5dcfec
  mov.w r12,#0x0
  ldr r1,[0x2c5dd004]
  add.w r3,r2,r2, lsl #0x2
  add r2,r12
  lsls r3,r3,#0x4
  sxth.w r12,r2
  smull r0,r2,r1,r3
  asrs r3,r3,#0x1f
  rsb r3,r3,r2, asr #0x5
  sxth r2,r3
  cmp r3,#0x0
  bne 0x2c5dcf94
  ldrsh.w r1,[sp,#0x0]
  cbz r1,0x2c5dcff6
  movs r0,#0x0
  ldr r6,[0x2c5dd004]
  add.w r3,r1,r1, lsl #0x2
  add r0,r1
  lsls r3,r3,#0x4
  sxth r0,r0
  smull r1,r2,r6,r3
  asrs r3,r3,#0x1f
  rsb r3,r3,r2, asr #0x5
  sxth r1,r3
  cmp r3,#0x0
  bne 0x2c5dcfba
  ldr r3,[0x2c5dd000]
  strh r0,[r5,#0x0]
  strh.w r12,[r4,#0x0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c5dcffa
  add sp,#0x8
  pop {r4,r5,r6,pc}
  ldrsh.w r1,[sp,#0x0]
  mov r12,r2
  cmp r1,#0x0
  bne 0x2c5dcfb6
  mov r0,r1
  b 0x2c5dcfd4
  bl 0x2c674828
