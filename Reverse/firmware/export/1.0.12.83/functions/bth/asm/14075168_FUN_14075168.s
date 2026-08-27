; FUN_14075168 @ 0x14075168 size=116
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w r10,[0x14075228]
  sub sp,#0x14
  mov r11,r3
  mov r8,lr
  mov r6,r0
  mov r7,r1
  mov r9,r2
  movs r4,#0x0
  bl 0x140756c0
  bl 0x14074d80
  mov r3,r10
  mov r12,r10
  b 0x14075196
  adds r4,#0x1
  cmp r4,#0x28
  add.w r12,r12,#0x28
  beq 0x140751ce
  ldrb.w r5,[r12,#0x0]
  cmp r5,#0x0
  bne 0x1407518c
  movs r0,#0x1
  add.w r1,r4,r4, lsl #0x2
  ldr r2,[sp,#0x38]
  add.w r5,r3,r1, lsl #0x3
  strd r9,r11,[r5,#0x18]
  strd r7,r7,[r5,#0xc]
  strd r2,r2,[r5,#0x4]
  str.w r8,[r5,#0x24]
  str r6,[r5,#0x20]
  strh.w r0,[r3,r1,lsl #0x3]
  bl 0x140756b4
  adds r0,r4,#0x1
  strb r0,[r6,#0x0]
  add sp,#0x14
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  bl 0x140756b4
  movs r0,#0x41
  ldr r2,[0x14075214]
  ldr r1,[0x14075218]
  bl 0x1402a64c
