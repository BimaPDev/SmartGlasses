; FUN_10089c2c @ 0x10089c2c size=732
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r10,r1
  sub sp,#0x14
  mov r6,r3
  ldr r3,[sp,#0x38]
  mov r5,r0
  mov r8,r2
  str r3,[sp,#0xc]
  bl 0x10089bf8
  cmp.w r10,#0x0
  bne 0x10089c50
  mov r0,r5
  bl 0x10126fae
  mov r10,r0
  mov r0,r5
  bl 0x10126fae
  mov r7,r0
  bl 0x101254a6
  mov r9,r0
  mov r0,r7
  bl 0x101254be
  add.w r3,r0,r9
  mov r0,r7
  str r3,[sp,#0x4]
  bl 0x101254d6
  str r0,[sp,#0x8]
  mov r0,r10
  bl 0x101254a6
  mov r11,r0
  mov r0,r10
  bl 0x101254be
  add.w r4,r0,r11
  mov r0,r10
  bl 0x101254d6
  add r11,r0
  cmp.w r8,#0x0
  bne 0x10089cb0
  mov r0,r10
  bl 0x10125498
  cmp r0,#0x1
  bne 0x10089d74
  mov r0,r10
  bl 0x1012579a
  ldr r3,[r5,#0x1c]
  ldr r2,[r5,#0x14]
  mvns r3,r3
  add r3,r2
  add r4,r3
  add r4,r0
  b 0x10089d74
  add.w r8,r8,#0xffffffff
  cmp.w r8,#0x14
  bhi.w 0x10089f50
  adr r3,[0x10089cc4]
  ldr.w pc,[r3,r8,lsl #0x2]
  mov r0,r10
  bl 0x1012579a
  ldr r3,[r5,#0x1c]
  ldr r2,[r5,#0x14]
  adds r3,#0x1
  subs r3,r3,r2
  add.w r3,r3,r3, lsr #0x1f
  sub.w r4,r4,r3, asr #0x1
  add.w r0,r0,r0, lsr #0x1f
  add.w r4,r4,r0, asr #0x1
  mov r0,r10
  bl 0x101257c8
  ldr r3,[r5,#0x20]
  ldr r2,[r5,#0x18]
  adds r3,#0x1
  subs r3,r3,r2
  add.w r3,r3,r3, lsr #0x1f
  sub.w r11,r11,r3, asr #0x1
  add.w r0,r0,r0, lsr #0x1f
  add.w r11,r11,r0, asr #0x1
  b 0x10089d74
  mov r0,r10
  bl 0x1012579a
  ldr r3,[r5,#0x1c]
  ldr r2,[r5,#0x14]
  adds r3,#0x1
  subs r3,r3,r2
  add.w r3,r3,r3, lsr #0x1f
  sub.w r4,r4,r3, asr #0x1
  add.w r0,r0,r0, lsr #0x1f
  add.w r4,r4,r0, asr #0x1
  mov r0,r7
  bl 0x10125498
  ldr.w r3,[r10,#0x14]
  cmp r0,#0x1
  ldr r0,[r7,#0x14]
  add r6,r3
  sub.w r6,r6,r0
  mov r0,r7
  bne.w 0x10089f58
  bl 0x1008a0c0
  ldr r3,[sp,#0x4]
  ldr.w r8,[r7,#0x18]
  subs r6,r6,r3
  add r6,r4
  ldr r3,[sp,#0x8]
  adds r4,r0,r6
  ldr.w r6,[r10,#0x18]
  mov r0,r7
  subs r6,r6,r3
  ldr r3,[sp,#0xc]
  add r6,r3
  bl 0x10126012
  sub.w r9,r6,r9
  sub.w r9,r9,r8
  add r11,r9
  add r11,r0
  movs r2,#0x0
  mov r0,r5
  movs r1,#0x1
  bl 0x10126e0a
  mov r2,r11
  mov r1,r4
  mov r0,r5
  add sp,#0x14
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  b.w 0x1012562a
  mov r0,r10
  bl 0x1012579a
  ldr r3,[r5,#0x1c]
  ldr r2,[r5,#0x14]
  adds r3,#0x1
  subs r3,r3,r2
  add.w r3,r3,r3, lsr #0x1f
  sub.w r4,r4,r3, asr #0x1
  add.w r0,r0,r0, lsr #0x1f
  add.w r4,r4,r0, asr #0x1
  mov r0,r10
  bl 0x101257c8
  ldr r3,[r5,#0x20]
  ldr r2,[r5,#0x18]
  mvns r3,r3
  add r3,r2
  add r11,r3
  add r11,r0
  b 0x10089d74
  mov r0,r10
  bl 0x1012579a
  ldr r3,[r5,#0x1c]
  ldr r2,[r5,#0x14]
  mvns r3,r3
  add r3,r2
  add r4,r3
  add r4,r0
  b 0x10089df4
  mov r0,r10
  bl 0x1012579a
  ldr r3,[r5,#0x1c]
  ldr r2,[r5,#0x14]
  mvns r3,r3
  add r3,r2
  add r4,r3
  add r4,r0
  b 0x10089d36
  ldr r0,[r5,#0x18]
  add.w r11,r0,#0xffffffff
  ldr r0,[r5,#0x20]
  movs r4,#0x0
  sub.w r11,r11,r0
  b 0x10089d74
  ldr.w r4,[r10,#0x1c]
  ldr.w r0,[r10,#0x14]
  adds r4,#0x1
  subs r4,r4,r0
  ldr r3,[r5,#0x1c]
  add.w r0,r4,r4, lsr #0x1f
  ldr r4,[r5,#0x14]
  adds r3,#0x1
  subs r3,r3,r4
  add.w r3,r3,r3, lsr #0x1f
  asrs r4,r3,#0x1
  rsb r4,r4,r0, asr #0x1
  ldr r0,[r5,#0x18]
  add.w r11,r0,#0xffffffff
  ldr r0,[r5,#0x20]
  sub.w r11,r11,r0
  b 0x10089d74
  ldr r0,[r5,#0x1c]
  ldr r4,[r5,#0x14]
  subs r4,r4,r0
  ldr.w r0,[r10,#0x1c]
  add r4,r0
  ldr.w r0,[r10,#0x14]
  subs r4,r4,r0
  b 0x10089e62
  ldr.w r0,[r10,#0x20]
  add.w r11,r0,#0x1
  ldr.w r0,[r10,#0x18]
  b 0x10089e38
  ldr.w r4,[r10,#0x1c]
  ldr.w r0,[r10,#0x14]
  adds r4,#0x1
  subs r4,r4,r0
  ldr r3,[r5,#0x1c]
  add.w r0,r4,r4, lsr #0x1f
  ldr r4,[r5,#0x14]
  adds r3,#0x1
  subs r3,r3,r4
  add.w r3,r3,r3, lsr #0x1f
  asrs r4,r3,#0x1
  rsb r4,r4,r0, asr #0x1
  ldr.w r0,[r10,#0x20]
  add.w r11,r0,#0x1
  ldr.w r0,[r10,#0x18]
  b 0x10089e6a
  ldr r0,[r5,#0x1c]
  ldr r4,[r5,#0x14]
  subs r4,r4,r0
  ldr.w r0,[r10,#0x1c]
  add r4,r0
  ldr.w r0,[r10,#0x14]
  subs r4,r4,r0
  b 0x10089eb4
  ldr r4,[r5,#0x14]
  ldr r0,[r5,#0x1c]
  subs r4,#0x1
  mov.w r11,#0x0
  subs r4,r4,r0
  b 0x10089d74
  ldr r4,[r5,#0x14]
  ldr r0,[r5,#0x1c]
  subs r4,#0x1
  subs r4,r4,r0
  ldr.w r0,[r10,#0x20]
  ldr.w r3,[r10,#0x18]
  adds r0,#0x1
  sub.w r11,r0,r3
  ldr r3,[r5,#0x20]
  ldr r2,[r5,#0x18]
  adds r3,#0x1
  subs r3,r3,r2
  add.w r0,r11,r11, lsr #0x1f
  add.w r11,r3,r3, lsr #0x1f
  asr.w r11,r11, asr #0x1
  rsb r11,r11,r0, asr #0x1
  b 0x10089d74
  ldr r4,[r5,#0x14]
  ldr r0,[r5,#0x1c]
  subs r4,#0x1
  ldr r3,[r5,#0x18]
  subs r4,r4,r0
  ldr r0,[r5,#0x20]
  sub.w r11,r3,r0
  ldr.w r3,[r10,#0x20]
  add r11,r3
  b 0x10089ebc
  ldr.w r4,[r10,#0x1c]
  ldr.w r0,[r10,#0x14]
  adds r4,#0x1
  b 0x10089edc
  ldr.w r4,[r10,#0x1c]
  ldr.w r0,[r10,#0x14]
  adds r4,#0x1
  b 0x10089eea
  ldr.w r4,[r10,#0x1c]
  ldr.w r0,[r10,#0x14]
  adds r4,#0x1
  b 0x10089f1a
  mov.w r11,#0x0
  mov r4,r11
  b 0x10089d74
  bl 0x1008a000
  b 0x10089d92
