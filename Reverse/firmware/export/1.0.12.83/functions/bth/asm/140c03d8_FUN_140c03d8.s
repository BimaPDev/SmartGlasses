; FUN_140c03d8 @ 0x140c03d8 size=366
  push {r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r4,r0
  mov r6,r2
  mov r0,r1
  cmp r2,#0x0
  beq.w 0x140c0542
  bl 0x140c03c0
  ldr r3,[r4,#0x8]
  mov r5,r0
  subs r3,#0x1
  cmp r0,r3
  bls 0x140c047a
  add.w r8,r0,#0x4
  mvn r3,#0xe0000000
  ldr.w r10,[r4,#0x4]
  cmp r8,r3
  ite cc
  lsl.cc.w r7,r8,#0x2
  mov.cs.w r7,#0xffffffff
  mov r0,r7
  bl 0x140d7f34
  movs r3,#0x0
  mov r11,r0
  ldr r0,[r4,#0x8]
  cmp r0,r3
  bne 0x140c04f2
  rsb.w r2,r0,#0x4
  movs r1,#0x0
  add r2,r5
  lsls r2,r2,#0x2
  cmp r8,r0
  it cc
  mov.cc r2,#0x0
  add.w r0,r11,r0, lsl #0x2
  bl 0x140e5658
  mov r0,r7
  ldr.w r9,[r4,#0xc]
  bl 0x140d7f34
  movs r3,#0x0
  mov r7,r0
  ldr r0,[r4,#0x8]
  cmp r0,r3
  bne 0x140c0500
  rsb.w r2,r0,#0x4
  movs r1,#0x0
  add r2,r5
  lsls r2,r2,#0x2
  cmp r8,r0
  it cc
  mov.cc r2,#0x0
  add.w r0,r7,r0, lsl #0x2
  bl 0x140e5658
  str r7,[r4,#0xc]
  strd r11,r8,[r4,#0x4]
  cmp.w r10,#0x0
  bne 0x140c050e
  cmp.w r9,#0x0
  beq 0x140c047a
  mov r0,r9
  bl 0x140d7e4c
  ldr r3,[r6,#0x4]
  ldr.w r9,[r4,#0x4]
  adds r3,#0x1
  str r3,[r6,#0x4]
  ldr.w r3,[r9,r5,lsl #0x2]
  cbz r3,0x140c04ce
  ldr r1,[0x140c0548]
  ldr r0,[r1,#0x0]
  cbz r0,0x140c04c6
  bl 0x140c03c0
  cmp r5,r0
  bne 0x140c0516
  ldr.w r10,[r4,#0x4]
  ldr r0,[r1,#0x4]
  bl 0x140c03c0
  ldr.w r3,[r10,r0,lsl #0x2]
  mov r7,r0
  cbz r3,0x140c04c6
  ldr r1,[r1,#0x4]
  mov r0,r6
  bl 0x140c8514
  ldr r3,[r0,#0x4]
  mov r8,r0
  adds r3,#0x1
  str r3,[r0,#0x4]
  ldr.w r0,[r10,r7,lsl #0x2]
  bl 0x140c028a
  str.w r8,[r10,r7,lsl #0x2]
  ldr.w r0,[r9,r5,lsl #0x2]
  bl 0x140c028a
  str.w r6,[r9,r5,lsl #0x2]
  movs r5,#0x0
  mov r6,r5
  ldr r3,[r4,#0x8]
  cmp r3,r5
  bls 0x140c0542
  ldr r3,[r4,#0xc]
  ldr.w r0,[r3,r5,lsl #0x2]
  cbz r0,0x140c04ee
  bl 0x140c028a
  ldr r3,[r4,#0xc]
  str.w r6,[r3,r5,lsl #0x2]
  adds r5,#0x1
  b 0x140c04d6
  ldr r2,[r4,#0x4]
  ldr.w r2,[r2,r3,lsl #0x2]
  str.w r2,[r11,r3,lsl #0x2]
  adds r3,#0x1
  b 0x140c041a
  ldr r2,[r4,#0xc]
  ldr.w r2,[r2,r3,lsl #0x2]
  str.w r2,[r7,r3,lsl #0x2]
  adds r3,#0x1
  b 0x140c0446
  mov r0,r10
  bl 0x140d7e4c
  b 0x140c046e
  ldr r0,[r1,#0x4]
  bl 0x140c03c0
  cmp r5,r0
  bne 0x140c053e
  ldr.w r10,[r4,#0x4]
  ldr r0,[r1,#0x0]
  bl 0x140c03c0
  ldr.w r3,[r10,r0,lsl #0x2]
  mov r7,r0
  cmp r3,#0x0
  beq 0x140c04c6
  ldr r1,[r1,#0x0]
  mov r0,r6
  bl 0x140c3328
  b 0x140c04b2
  adds r1,#0x8
  b 0x140c048c
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
