; FUN_140d2d66 @ 0x140d2d66 size=108
  push {r4,r5,r6,lr}
  ldrb.w r4,[sp,#0x10]
  cbz r4,0x140d2d92
  mov r3,r0
  movs r6,#0xa
  udiv r5,r1,r6
  mls r4,r6,r5,r1
  adds r4,#0x4
  ldr.w r4,[r2,r4,lsl #0x2]
  str.w r4,[r3,#-0x4]!
  mov r4,r1
  mov r1,r5
  cmp r4,#0x9
  bhi 0x140d2d72
  subs r0,r0,r3
  asrs r0,r0,#0x2
  pop {r4,r5,r6,pc}
  and r4,r3,#0x4a
  cmp r4,#0x40
  bne 0x140d2db2
  mov r3,r0
  and r4,r1,#0x7
  lsrs r1,r1,#0x3
  add.w r4,r4,#0x4
  ldr.w r4,[r2,r4,lsl #0x2]
  str.w r4,[r3,#-0x4]!
  bne 0x140d2d9c
  b 0x140d2d8c
  tst r3,#0x4000
  mov r3,r0
  ite ne
  mov.ne r5,#0x14
  mov.eq r5,#0x4
  and r4,r1,#0xf
  lsrs r1,r1,#0x4
  add r4,r5
  ldr.w r4,[r2,r4,lsl #0x2]
  str.w r4,[r3,#-0x4]!
  bne 0x140d2dbe
  b 0x140d2d8c
