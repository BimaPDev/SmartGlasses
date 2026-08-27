; FUN_2c65febe @ 0x2c65febe size=164
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  mov r4,r2
  ldrb.w r2,[sp,#0x28]
  mov r5,r3
  mov r7,r0
  ldrd r8,r3,[sp,#0x20]
  cbz r2,0x2c65ff10
  mov r6,r0
  mov r0,r4
  mov r1,r5
  movs r2,#0xa
  movs r3,#0x0
  bl 0x2c672ae8
  adds r2,#0x4
  mov r10,r4
  mov r0,r4
  ldr.w r3,[r8,r2,lsl #0x2]
  mov r1,r5
  movs r2,#0xa
  mov r9,r5
  str.w r3,[r6,#-0x4]!
  movs r3,#0x0
  bl 0x2c672ae8
  cmp.w r10,#0xa
  mov r4,r0
  mov r5,r1
  sbcs r3,r9,#0x0
  bcs 0x2c65fed4
  subs r0,r7,r6
  asrs r0,r0,#0x2
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  and r2,r3,#0x4a
  cmp r2,#0x40
  bne 0x2c65ff38
  mov r6,r0
  and r3,r4,#0x7
  lsrs r4,r4,#0x3
  adds r3,#0x4
  orr.w r4,r4,r5, lsl #0x1d
  lsrs r5,r5,#0x3
  ldr.w r3,[r8,r3,lsl #0x2]
  str.w r3,[r6,#-0x4]!
  orrs.w r3,r4,r5
  bne 0x2c65ff1a
  b 0x2c65ff08
  tst r3,#0x4000
  mov r6,r0
  ite ne
  mov.ne r2,#0x14
  mov.eq r2,#0x4
  and r3,r4,#0xf
  lsrs r4,r4,#0x4
  add r3,r2
  orr.w r4,r4,r5, lsl #0x1c
  lsrs r5,r5,#0x4
  ldr.w r3,[r8,r3,lsl #0x2]
  str.w r3,[r6,#-0x4]!
  orrs.w r3,r4,r5
  bne 0x2c65ff44
  b 0x2c65ff08
