; FUN_2c4ade20 @ 0x2c4ade20 size=204
  push {r4,r5,r6,lr}
  ldr r3,[0x2c4adeec]
  sub sp,#0x18
  ldr r4,[0x2c4adef0]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x14]
  mov.w r3,#0x0
  ldr.w r3,[r4,#0x6bc]
  cmp r3,#0x1
  bhi 0x2c4ade92
  add.w r2,r3,#0x1aa
  ldr.w r2,[r4,r2,lsl #0x2]
  cbz r2,0x2c4ade92
  add.w r3,r4,r3, lsl #0x2
  mov r5,r1
  mov r6,r0
  ldr.w r1,[r3,#0x6b4]
  ldr.w r3,[r4,#0x6b0]
  add.w r0,r1,#0x10
  cmp r0,r3
  bcs 0x2c4adea8
  adds r3,r5,#0x7
  lsrs r3,r3,#0x3
  orr r3,r3,#0x60000000
  str r3,[r2,r1]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r2
  movs r2,#0x0
  str r6,[r3,#0x4]
  ldr.w r3,[r4,#0x6bc]
  add.w r3,r3,#0x1ac
  add.w r4,r4,r3, lsl #0x2
  ldr r3,[r4,#0x4]
  adds r3,#0x8
  str r3,[r4,#0x4]
  b 0x2c4ade94
  movs r2,#0x3
  ldr r3,[0x2c4adeec]
  ldr r1,[r3,#0x0]
  ldr r3,[sp,#0x14]
  eors r1,r3
  mov.w r3,#0x0
  bne 0x2c4adee8
  mov r0,r2
  add sp,#0x18
  pop {r4,r5,r6,pc}
  mov r0,r4
  bl 0x2c4adb40
  mov r2,r0
  cmp r0,#0x0
  bne 0x2c4ade94
  mov.w r3,#0xffffffff
  str r0,[sp,#0x10]
  add r1,sp,#0x4
  movs r0,#0x5
  str r3,[sp,#0xc]
  strd r4,r3,[sp,#0x4]
  bl 0x2c4b4674
  mov r2,r0
  cmp r0,#0x0
  bne 0x2c4ade94
  ldr r3,[0x2c4adef4]
  str r0,[r3,#0x0]
  ldr.w r3,[r4,#0x6bc]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,r2,lsl #0x2]
  ldr.w r1,[r3,#0x6b4]
  b 0x2c4ade5a
  bl 0x2c674828
