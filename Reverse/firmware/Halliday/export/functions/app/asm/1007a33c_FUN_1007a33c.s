; FUN_1007a33c @ 0x1007a33c size=202
  mov.w r3,#0x3e8
  push {r4,r5,r6,r7,r8,r9,lr}
  movs r4,#0x64
  muls r0,r3
  sub sp,#0x44
  ldr r7,[0x1007a408]
  add r5,sp,#0x4
  udiv r4,r0,r4
  movs r2,#0x3c
  movs r1,#0x0
  mov r0,r5
  ldrb.w r6,[r7,#0x156]
  bl 0x1011ea48
  movs r3,#0x0
  cmp r3,r4
  blt 0x1007a392
  movs r1,#0x0
  uxth r6,r4
  subs r0,r6,#0x1
  uxth.w r12,r1
  cmp r12,r0
  mov r7,r12
  blt 0x1007a3aa
  movs r3,#0x5
  lsls r4,r4,#0x2
  udiv r4,r4,r3
  add r3,sp,#0x40
  add.w r4,r3,r4, lsl #0x1
  ldrh.w r0,[r4,#-0x3e]
  add sp,#0x44
  pop.w {r4,r5,r6,r7,r8,r9,lr}
  b.w 0x1011feb0
  cbz r6,0x1007a3a6
  subs r6,#0x1
  add.w r2,r7,r6, lsl #0x1
  ldrh.w r2,[r2,#0xec]
  strh.w r2,[r5,r3,lsl #0x1]
  adds r3,#0x1
  b 0x1007a362
  movs r6,#0x1d
  b 0x1007a396
  mov r2,r12
  add.w r3,r12,#0x1
  uxth r3,r3
  add.w lr,r5,r3, lsl #0x1
  cmp r6,r3
  bhi 0x1007a3ea
  cmp r2,r12
  beq 0x1007a3e6
  ldrh.w r12,[r5,r7,lsl #0x1]
  ldrh.w r3,[r5,r2,lsl #0x1]
  eor.w r3,r3,r12
  uxth r3,r3
  strh.w r3,[r5,r2,lsl #0x1]
  ldrh.w r12,[r5,r7,lsl #0x1]
  eor.w r3,r3,r12
  strh.w r3,[r5,r7,lsl #0x1]
  ldrh.w r7,[r5,r2,lsl #0x1]
  eors r3,r7
  strh.w r3,[r5,r2,lsl #0x1]
  adds r1,#0x1
  b 0x1007a36c
  add.w r9,sp,#0x40
  add.w r9,r9,r2, lsl #0x1
  ldrh.w r8,[lr],#0x2
  ldrh.w r9,[r9,#-0x3c]
  cmp r9,r8
  it hi
  mov.hi r2,r3
  adds r3,#0x1
  uxth r3,r3
  b 0x1007a3b6
