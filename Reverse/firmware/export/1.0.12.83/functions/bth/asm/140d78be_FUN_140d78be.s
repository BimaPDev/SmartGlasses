; FUN_140d78be @ 0x140d78be size=120
  push {r0,r1,r4,r5,r6,r7,r8,r9,r10,lr}
  ldr r6,[sp,#0x28]
  add.w r8,r1,r2
  mov r7,r3
  ldr r3,[r0,#0x4]
  subs r2,r6,r2
  mov r5,r1
  sub.w r9,r3,r8
  add r1,sp,#0x4
  add r2,r3
  mov r3,r0
  mov r4,r0
  str r2,[sp,#0x4]
  ldr.w r2,[r3],#0x8
  cmp r2,r3
  ite ne
  ldr.ne r2,[r0,#0x8]
  mov.eq r2,#0x3
  bl 0x140d777c
  mov r10,r0
  cbz r5,0x140d78fa
  mov r2,r5
  ldr r1,[r4,#0x0]
  bl 0x140d7822
  cbz r7,0x140d790a
  cbz r6,0x140d790a
  mov r2,r6
  mov r1,r7
  add.w r0,r10,r5, lsl #0x2
  bl 0x140d7822
  cmp.w r9,#0x0
  beq 0x140d7922
  ldr r1,[r4,#0x0]
  add r5,r6
  mov r2,r9
  add.w r1,r1,r8, lsl #0x2
  add.w r0,r10,r5, lsl #0x2
  bl 0x140d7822
  mov r0,r4
  bl 0x140d77c4
  ldr r3,[sp,#0x4]
  str.w r10,[r4,#0x0]
  str r3,[r4,#0x8]
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
