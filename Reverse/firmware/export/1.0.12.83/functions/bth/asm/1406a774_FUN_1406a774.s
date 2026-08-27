; FUN_1406a774 @ 0x1406a774 size=116
  push {r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r8,r0
  mov r0,r1
  mov r5,r1
  mov r9,r2
  mov r7,r3
  ldrb.w r10,[sp,#0x28]
  ldrb.w r6,[sp,#0x2c]
  ldr.w r11,[sp,#0x30]
  bl 0x14066108
  cbz r0,0x1406a7e4
  add.w r3,r6,r6, lsl #0x2
  add.w r3,r6,r3, lsl #0x1
  lsls r3,r3,#0x1
  ldrh r1,[r0,#0x4]
  movs r2,#0x2
  movw r0,#0xb02
  adds r3,#0x20
  bl 0x14074378
  mov r4,r0
  cbz r0,0x1406a7e4
  mov.w r3,#0x300
  add.w r2,r6,r6, lsl #0x2
  add.w r2,r6,r2, lsl #0x1
  strh.w r9,[r0,#0x2]
  strb r5,[r0,#0x4]
  strb.w r8,[r0,#0x5]
  strh r7,[r0,#0x6]
  strb.w r10,[r0,#0x8]
  strb r6,[r0,#0x9]
  mov r1,r11
  strh r3,[r4,#0x0]
  lsls r2,r2,#0x1
  adds r0,#0xa
  bl 0x140e5278
  mov r0,r4
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  b.w 0x140743d0
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
