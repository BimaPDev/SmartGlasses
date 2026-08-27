; FUN_1402bda8 @ 0x1402bda8 size=94
  push {r4,r5,r6,lr}
  mov r5,r1
  mov r4,r0
  bl 0x140e5178
  cmp.w r5,r0, lsr #0x4
  lsr.w r6,r0,#0x4
  itet hi
  mov.hi r0,#0x1
  mov.ls r0,#0x0
  lsl.hi r6,r0
  cbz r4,0x1402bdf2
  cmp r4,#0x1
  beq 0x1402bdf8
  lsrs r3,r5,#0x1
  add.w r3,r3,r6, lsl #0x6
  udiv r3,r3,r5
  movw r1,#0xfffd
  lsrs r2,r3,#0x6
  subs r0,r2,#0x1
  cmp r0,r1
  and r3,r3,#0x3f
  bhi 0x1402bdfe
  ldr r1,[0x1402be08]
  add.w r4,r4,r4, lsl #0x1
  ldr.w r1,[r1,r4,lsl #0x2]
  str r2,[r1,#0x24]
  str r3,[r1,#0x28]
  pop {r4,r5,r6,pc}
  bl 0x1402df44
  b 0x1402bdc8
  bl 0x1402dff4
  b 0x1402bdc8
  mov r1,r5
  ldr r0,[0x1402be0c]
  bl 0x1402b0f8
