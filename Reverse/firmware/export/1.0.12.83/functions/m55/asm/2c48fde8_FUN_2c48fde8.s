; FUN_2c48fde8 @ 0x2c48fde8 size=114
  push {r4,r5,r6,r7,r8,lr}
  ldr r6,[0x2c48fe60]
  mov r5,r2
  add.w r2,r0,r0, lsl #0x1
  sub sp,#0x8
  mov r4,r0
  add.w r2,r6,r2, lsl #0x3
  ldr r7,[r2,#0x4]
  cbz r7,0x2c48fe46
  mov r0,r1
  ldr r1,[r2,#0x14]
  ldr r3,[r2,#0x8]
  lsl.w r8,r4,#0x1
  adds r2,r1,r5
  cmp r2,r3
  it hi
  sub.hi r5,r3,r1
  add r1,r7
  mov r2,r5
  bl 0x2c674668
  add.w r3,r8,r4
  subs r4,#0x12
  add.w r3,r6,r3, lsl #0x3
  cmp r4,#0x1
  ldr r2,[r3,#0x14]
  add r5,r2
  str r5,[r3,#0x14]
  bhi 0x2c48fe3e
  ldr r0,[r3,#0x8]
  subs r0,r0,r5
  clz r0,r0
  lsrs r0,r0,#0x5
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  movs r0,#0x0
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r0,[0x2c48fe64]
  ldr r1,[0x2c48fe68]
  ldr r3,[0x2c48fe6c]
  ldr r2,[0x2c48fe70]
  strd r1,r0,[sp,#0x0]
  movs r1,#0x8a
  movs r0,#0x4
  bl 0x2c673d88
