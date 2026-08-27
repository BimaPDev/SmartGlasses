; FUN_2c4adef8 @ 0x2c4adef8 size=246
  push {r4,r5,lr}
  ldr r3,[0x2c4adff0]
  sub sp,#0x1c
  ldr r4,[0x2c4adff4]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x14]
  mov.w r3,#0x0
  ldr.w r3,[r4,#0x6bc]
  cmp r3,#0x1
  bhi 0x2c4adf96
  add.w r2,r3,#0x1aa
  ldr.w r2,[r4,r2,lsl #0x2]
  cmp r2,#0x0
  beq 0x2c4adf96
  add.w r3,r4,r3, lsl #0x2
  ldr.w r1,[r4,#0x6b0]
  ldr.w r3,[r3,#0x6b4]
  add.w r0,r3,#0x10
  cmp r0,r1
  bcs 0x2c4adfaa
  ldr r0,[0x2c4adff8]
  movs r1,#0x0
  str r0,[r2,r3]
  mov r0,r1
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  str r1,[r3,#0x4]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  ldr r2,[0x2c4adffc]
  str r2,[r3,#0x8]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  str r1,[r3,#0xc]
  ldr.w r3,[r4,#0x6bc]
  add.w r3,r3,#0x1ac
  add.w r4,r4,r3, lsl #0x2
  ldr r3,[r4,#0x4]
  adds r3,#0x10
  str r3,[r4,#0x4]
  b 0x2c4adf98
  movs r0,#0x3
  ldr r3,[0x2c4adff0]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x14]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c4adfea
  add sp,#0x1c
  pop {r4,r5,pc}
  mov r0,r4
  bl 0x2c4adb40
  mov r3,r0
  cmp r0,#0x0
  bne 0x2c4adf98
  mov.w r2,#0xffffffff
  add r1,sp,#0x4
  movs r0,#0x5
  str r3,[sp,#0x10]
  str r2,[sp,#0xc]
  strd r4,r2,[sp,#0x4]
  bl 0x2c4b4674
  mov r3,r0
  cmp r0,#0x0
  bne 0x2c4adf98
  ldr.w r1,[r4,#0x6bc]
  ldr r5,[0x2c4ae000]
  add.w r0,r1,#0x1aa
  add.w r1,r4,r1, lsl #0x2
  str r3,[r5,#0x0]
  ldr.w r2,[r4,r0,lsl #0x2]
  ldr.w r3,[r1,#0x6b4]
  b 0x2c4adf30
  bl 0x2c674828
