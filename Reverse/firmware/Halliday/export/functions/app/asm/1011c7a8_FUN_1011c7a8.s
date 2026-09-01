; FUN_1011c7a8 @ 0x1011c7a8 size=230
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  movs r5,#0x0
  sub sp,#0x1c
  strd r1,r2,[sp,#0x0]
  mov r4,r5
  mov r2,r5
  sxtb.w r8,r5
  cmp r3,r8
  bgt 0x1011c7ea
  mov.w r10,#0x0
  lsls r5,r3,#0x1
  subs r5,#0x1
  str r5,[sp,#0x8]
  uxtb.w r5,r10
  ldr r6,[sp,#0x8]
  add.w r12,r5,r3
  sxtb.w r12,r12
  cmp r12,r6
  blt 0x1011c838
  add.w r0,r0,r3, lsl #0x3
  str.w r2,[r0,#-0x4]
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  mov.w r12,#0x0
  mov lr,r12
  ldr r6,[sp,#0x4]
  add.w r9,r6,r5, lsl #0x2
  ldr r1,[sp,#0x0]
  ldr.w r7,[r9],#-0x4
  ldr.w r6,[r1,r12,lsl #0x2]
  strd r2,r4,[sp,#0x8]
  umull r10,r11,r7,r6
  ldrd r1,r2,[sp,#0x8]
  adds.w r6,r10,r1
  adcs.w r7,r11,r2
  ite cs
  mov.cs r2,#0x1
  mov.cc r2,#0x0
  add.w r12,r12,#0x1
  sxtb.w r10,r12
  cmp r10,r8
  add lr,r2
  mov r4,r7
  mov r2,r6
  ble 0x1011c7f6
  str.w r6,[r0,r5,lsl #0x2]
  mov r2,r7
  mov r4,lr
  adds r5,#0x1
  b 0x1011c7b8
  ldr r1,[sp,#0x0]
  adds r5,#0x1
  sxtb r5,r5
  add.w r11,r1,r5, lsl #0x2
  mov r1,r4
  movs r4,#0x0
  ldr r6,[sp,#0x4]
  sub.w lr,r12,r5
  add.w lr,r6,lr, lsl #0x2
  cmp r5,r3
  blt 0x1011c860
  str.w r2,[r0,r12,lsl #0x2]
  add.w r10,r10,#0x1
  mov r2,r1
  b 0x1011c7ca
  ldr.w r7,[r11],#0x4
  ldr.w r6,[lr],#-0x4
  strd r2,r1,[sp,#0x10]
  umull r6,r7,r7,r6
  ldrd r1,r2,[sp,#0x10]
  adds.w r8,r6,r1
  adcs.w r9,r7,r2
  ite cs
  mov.cs r2,#0x1
  mov.cc r2,#0x0
  adds r5,#0x1
  add r4,r2
  mov r1,r9
  mov r2,r8
  sxtb r5,r5
  b 0x1011c850
