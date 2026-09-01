; FUN_1011ca16 @ 0x1011ca16 size=310
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r5,r3
  sub sp,#0x94
  add r3,sp,#0x50
  strd r3,r1,[sp,#0x8]
  mov r8,r0
  mov r1,r5
  mov r0,r2
  mov r6,r2
  bl 0x1011c8d6
  rsb r0,r0,r5, lsl #0x6
  sxth r4,r0
  mov r1,r4
  cmp r4,#0x0
  it lt
  add.lt.w r1,r4,#0x1f
  rsbs r3,r4
  sbfx r1,r1,#0x5,#0x8
  and r3,r3,#0x1f
  add r0,sp,#0x10
  and r7,r4,#0x1f
  it pl
  rsb.pl r7,r3
  bl 0x1011c88e
  cmp r7,#0x0
  lsl.w r0,r1,#0x2
  ble 0x1011caba
  movs r2,#0x0
  add r3,sp,#0x10
  adds r1,r3,r0
  mov r3,r2
  rsb.w lr,r7,#0x20
  cmp r5,r3
  bhi 0x1011caa4
  movs r6,#0x1
  lsls r3,r5,#0x1
  str r3,[sp,#0x0]
  lsls r3,r5,#0x2
  str r3,[sp,#0x4]
  add r3,sp,#0x10
  add.w r9,r3,r5, lsl #0x2
  subs r7,r5,#0x1
  add r3,sp,#0x90
  add.w r7,r3,r7, lsl #0x2
  cmp r4,#0x0
  bge 0x1011cb36
  add r3,sp,#0x90
  add.w r6,r3,r6, lsl #0x2
  mov r2,r5
  mov r0,r8
  ldr.w r1,[r6,#-0x88]
  bl 0x1011c918
  add sp,#0x94
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr.w r12,[r6,r3,lsl #0x2]
  adds r3,#0x1
  lsl.w r0,r12,r7
  orrs r2,r0
  str.w r2,[r1],#0x4
  lsr.w r2,r12,lr
  b 0x1011ca6c
  add r3,sp,#0x10
  mov r2,r5
  mov r1,r6
  add r0,r3
  bl 0x1011c918
  b 0x1011ca70
  ldr.w r3,[r10,#-0x88]
  add.w r12,r12,#0x1
  ldr.w r2,[r3,r0,lsl #0x2]
  add r3,sp,#0x90
  add.w r3,r3,r0, lsl #0x2
  ldr.w r3,[r3,#-0x80]
  add r3,r1
  subs r3,r2,r3
  ite cc
  mov.cc.w r11,#0x1
  mov.cs.w r11,#0x0
  cmp r2,r3
  it ne
  mov.ne r1,r11
  ldr.w r2,[lr,#-0x88]
  str.w r3,[r2,r0,lsl #0x2]
  ldr r3,[sp,#0x0]
  sxtb.w r0,r12
  cmp r0,r3
  blt 0x1011cac8
  subs r3,r6,r1
  rsbs r6,r3
  mov r1,r5
  add r0,sp,#0x10
  adcs r6,r3
  bl 0x1011c756
  ldr r2,[sp,#0x4]
  add r3,sp,#0x90
  add r3,r2
  ldr.w r2,[r3,#-0x80]
  ldr.w r3,[r7,#-0x80]
  mov r1,r5
  orr.w r3,r3,r2, lsl #0x1f
  mov r0,r9
  subs r4,#0x1
  str.w r3,[r7,#-0x80]
  sxth r4,r4
  bl 0x1011c756
  b 0x1011ca88
  mov.w r12,#0x0
  add r3,sp,#0x90
  rsb.w lr,r6,#0x1
  mov r1,r12
  add.w r10,r3,r6, lsl #0x2
  add.w lr,r3,lr, lsl #0x2
  b 0x1011cafa
