; FUN_2c4add48 @ 0x2c4add48 size=200
  push {r4,r5,r6,lr}
  ldr r3,[0x2c4ade10]
  sub sp,#0x18
  ldr r4,[0x2c4ade14]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x14]
  mov.w r3,#0x0
  ldr.w r3,[r4,#0x6bc]
  cmp r3,#0x1
  bhi 0x2c4addb6
  add.w r2,r3,#0x1aa
  ldr.w r2,[r4,r2,lsl #0x2]
  cbz r2,0x2c4addb6
  add.w r3,r4,r3, lsl #0x2
  ldr r6,[r1,#0x0]
  mov r5,r0
  ldr.w r1,[r3,#0x6b4]
  ldr.w r3,[r4,#0x6b0]
  add.w r0,r1,#0x10
  cmp r0,r3
  bcs 0x2c4addcc
  ldr r3,[0x2c4ade18]
  orrs r3,r5
  str r3,[r2,r1]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r2,r3
  movs r3,#0x0
  str r6,[r2,#0x4]
  ldr.w r2,[r4,#0x6bc]
  add.w r2,r2,#0x1ac
  add.w r4,r4,r2, lsl #0x2
  ldr r2,[r4,#0x4]
  adds r2,#0x8
  str r2,[r4,#0x4]
  b 0x2c4addb8
  movs r3,#0x3
  ldr r2,[0x2c4ade10]
  ldr r1,[r2,#0x0]
  ldr r2,[sp,#0x14]
  eors r1,r2
  mov.w r2,#0x0
  bne 0x2c4ade0c
  mov r0,r3
  add sp,#0x18
  pop {r4,r5,r6,pc}
  mov r0,r4
  bl 0x2c4adb40
  mov r3,r0
  cmp r0,#0x0
  bne 0x2c4addb8
  mov.w r3,#0xffffffff
  str r0,[sp,#0x10]
  add r1,sp,#0x4
  movs r0,#0x5
  str r3,[sp,#0xc]
  strd r4,r3,[sp,#0x4]
  bl 0x2c4b4674
  mov r3,r0
  cmp r0,#0x0
  bne 0x2c4addb8
  ldr r3,[0x2c4ade1c]
  str r0,[r3,#0x0]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r1,[r3,#0x6b4]
  b 0x2c4add82
  bl 0x2c674828
