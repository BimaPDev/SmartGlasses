; FUN_140c4758 @ 0x140c4758 size=150
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r5,r0
  ldr r0,[r0,#0x0]
  sub.w r9,r3,r2
  add.w r10,r2,r1
  ldr.w r6,[r0,#-0xc]
  mov r7,r1
  ldr.w r1,[r0,#-0x8]
  mov r4,r3
  add r9,r6
  sub.w r6,r6,r10
  cmp r9,r1
  bhi 0x140c4786
  ldr.w r3,[r0,#-0x4]
  cmp r3,#0x0
  ble 0x140c47c6
  add r2,sp,#0x4
  mov r0,r9
  bl 0x140c464c
  mov r8,r0
  add.w r11,r0,#0xc
  cbz r7,0x140c47a0
  mov r2,r7
  ldr r1,[r5,#0x0]
  mov r0,r11
  bl 0x140c456c
  cbz r6,0x140c47b6
  add r4,r7
  ldr r1,[r5,#0x0]
  mov r2,r6
  add.w r0,r8,r4, lsl #0x2
  add.w r1,r1,r10, lsl #0x2
  adds r0,#0xc
  bl 0x140c456c
  ldr r0,[r5,#0x0]
  add r1,sp,#0x4
  subs r0,#0xc
  bl 0x140c4728
  str.w r11,[r5,#0x0]
  b 0x140c47c8
  cbnz r6,0x140c47d8
  ldr r0,[r5,#0x0]
  mov r1,r9
  subs r0,#0xc
  bl 0x140c4634
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  cmp r4,r2
  beq 0x140c47c8
  add r4,r7
  add.w r1,r0,r10, lsl #0x2
  mov r2,r6
  add.w r0,r0,r4, lsl #0x2
  bl 0x140c4584
  b 0x140c47c8
