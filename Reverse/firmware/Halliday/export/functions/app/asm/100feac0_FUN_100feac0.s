; FUN_100feac0 @ 0x100feac0 size=156
  push {r4,r5,r6,r7,r8,lr}
  ldr r3,[r0,#0x60]
  ldr.w r4,[r0,#0x164]
  mov r5,r0
  ldr r6,[r3,#0x8]
  cbz r4,0x100feb08
  ldr.w r7,[r0,#0x15c]
  add.w r7,r7,r7, lsl #0x2
  add.w r7,r4,r7, lsl #0x2
  cmp r4,r7
  bcs 0x100feafa
  mov.w r8,#0x0
  ldr r1,[r4,#0x10]
  mov r0,r6
  bl 0x100fb5cc
  adds r4,#0x14
  str.w r8,[r4,#-0x4]
  cmp r7,r4
  bhi 0x100feae4
  ldr.w r4,[r5,#0x164]
  mov r1,r4
  mov r0,r6
  bl 0x100fb5cc
  movs r3,#0x0
  str.w r3,[r5,#0x164]
  ldr.w r4,[r5,#0x16c]
  cbz r4,0x100feb46
  ldr.w r7,[r5,#0x168]
  add.w r7,r7,r7, lsl #0x1
  add.w r7,r4,r7, lsl #0x2
  cmp r4,r7
  bcs 0x100feb38
  mov.w r8,#0x0
  ldr r1,[r4,#0x8]
  mov r0,r6
  bl 0x100fb5cc
  adds r4,#0xc
  str.w r8,[r4,#-0x4]
  cmp r7,r4
  bhi 0x100feb22
  ldr.w r4,[r5,#0x16c]
  mov r1,r4
  mov r0,r6
  bl 0x100fb5cc
  movs r3,#0x0
  str.w r3,[r5,#0x16c]
  movs r3,#0x0
  str.w r3,[r5,#0x15c]
  str.w r3,[r5,#0x168]
  strh.w r3,[r5,#0x158]
  str.w r3,[r5,#0x160]
  pop.w {r4,r5,r6,r7,r8,pc}
