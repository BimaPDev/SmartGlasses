; FUN_100fec54 @ 0x100fec54 size=114
  push {r4,r5,r6,r7,lr}
  movs r6,#0x0
  mov r5,r0
  ldrh r4,[r0,#0x8]
  sub sp,#0x14
  add r7,sp,#0xc
  lsrs r4,r4,#0x1
  mov r0,r1
  mov r2,r6
  str r6,[sp,#0x0]
  str r7,[sp,#0x4]
  movs r1,#0x1
  adds r3,r4,#0x1
  ldr r5,[r5,#0x10]
  bl 0x100fb280
  ldr r2,[sp,#0xc]
  cbnz r2,0x100fecbc
  cbz r4,0x100fecc2
  mov.w lr,#0x3f
  subs r6,r0,#0x1
  add.w r12,r5,#0x1
  ldrb.w r1,[r5,r2,lsl #0x1]
  ldrb.w r3,[r12,r2,lsl #0x1]
  orr.w r3,r3,r1, lsl #0x8
  sxth r7,r3
  sub.w r1,r3,#0x20
  cbz r3,0x100feca8
  cmp r1,#0x5f
  add.w r2,r2,#0x1
  bhi 0x100fecb2
  cmp r4,r2
  strb.w r7,[r6,#0x1]!
  bne 0x100fec84
  add r2,r0
  movs r3,#0x0
  strb r3,[r2,#0x0]
  add sp,#0x14
  pop {r4,r5,r6,r7,pc}
  cmp r4,r2
  strb.w lr,[r6,#0x1]!
  bne 0x100fec84
  b 0x100feca8
  mov r0,r6
  add sp,#0x14
  pop {r4,r5,r6,r7,pc}
  mov r2,r0
  b 0x100fecaa
