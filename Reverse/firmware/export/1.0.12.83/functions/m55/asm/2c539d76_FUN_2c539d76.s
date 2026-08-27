; FUN_2c539d76 @ 0x2c539d76 size=252
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  cmp r2,#0x0
  sub sp,#0xc
  asr.w r8,r2, asr #0x2
  ldr.w r10,[0x2c539e78]
  mov r7,r3
  str r0,[sp,#0x4]
  mul r8,r10,r8
  ble 0x2c539e6c
  mov r9,r1
  ldr r2,[r3,#0x8]
  ldr r4,[r3,#0x0]
  subs r6,r2,r4
  mov r5,r9
  asrs r6,r6,#0x2
  mul r6,r10,r6
  cmp r6,r8
  it ge
  mov.ge r6,r8
  rsb r2,r6,r6, lsl #0x3
  lsls r1,r2,#0x2
  sbfx r3,r2,#0x0,#0x1e
  add.w r9,r9,r2, lsl #0x2
  cmp r1,#0x0
  mul r11,r10,r3
  str r1,[sp,#0x0]
  ble 0x2c539df2
  adds r5,#0x1c
  adds r4,#0x1c
  ldr.w r1,[r5,#-0x1c]
  adds r4,#0x1c
  ldr.w r0,[r4,#-0x38]
  adds r5,#0x1c
  bl 0x2c53bfe4
  ldr.w r1,[r5,#-0x30]
  ldr.w r0,[r4,#-0x30]
  bl 0x2c53bfe4
  ldr.w r1,[r5,#-0x34]
  ldr.w r0,[r4,#-0x34]
  bl 0x2c53bfe4
  subs.w r11,r11,#0x1
  bne 0x2c539dc2
  ldr r4,[r7,#0x0]
  ldr r3,[r7,#0x4]
  subs r3,r4,r3
  asrs r3,r3,#0x2
  mla r3,r10,r3,r6
  cmp r3,#0x0
  blt 0x2c539e5e
  cmp r3,#0x11
  bgt 0x2c539e2a
  ldr r3,[sp,#0x0]
  ldr r2,[r7,#0x8]
  add r4,r3
  str r4,[r7,#0x0]
  sub.w r8,r8,r6
  cmp.w r8,#0x0
  bgt 0x2c539d96
  ldr r0,[sp,#0x4]
  ldr r1,[r7,#0x4]
  ldr r3,[r7,#0xc]
  str r4,[r0,#0x0]
  str r3,[r0,#0xc]
  strd r1,r2,[r0,#0x4]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r2,[0x2c539e74]
  smull r1,r2,r2,r3
  asrs r1,r3,#0x1f
  rsb r2,r1,r2, asr #0x2
  ldr r1,[r7,#0xc]
  add.w r0,r1,r2, lsl #0x2
  str r0,[r7,#0xc]
  add.w r0,r2,r2, lsl #0x3
  ldr.w r4,[r1,r2,lsl #0x2]
  sub.w r3,r3,r0, lsl #0x1
  add.w r2,r4,#0x1f8
  str r4,[r7,#0x4]
  rsb r3,r3,r3, lsl #0x3
  str r2,[r7,#0x8]
  add.w r4,r4,r3, lsl #0x2
  str r4,[r7,#0x0]
  b 0x2c539e0c
  mvns r2,r3
  ldr r1,[0x2c539e74]
  umull r1,r2,r1,r2
  mvn.w r2,r2, lsr #0x2
  b 0x2c539e36
  ldr r4,[r3,#0x0]
  ldr r2,[r3,#0x8]
  b 0x2c539e16
