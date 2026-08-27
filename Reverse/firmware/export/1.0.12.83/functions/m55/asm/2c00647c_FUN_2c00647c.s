; FUN_2c00647c @ 0x2c00647c size=1698
  adds r4,r5,#0x2
  adds r2,r5,#0x1
  ands r4,r4,#0x7
  beq 0x2c005ee0
  lsls r3,r2,#0x8
  and r3,r3,#0x100
  orrs r3,r4
  cmp r3,#0x7
  bhi.w 0x2c005fce
  subs r3,#0x2
  cmp r3,#0x5
  bhi.w 0x2c00666e
  tbh [pc,r3]
  strd r4,r3,[sp,#0x4]
  ldr r3,[0x2c0061a8]
  movs r2,#0xc3
  ldr r1,[0x2c0061ac]
  movs r0,#0x3
  str r3,[sp,#0x0]
  ldr r3,[0x2c0061b0]
  bl 0x2c013c4c
  ldr r3,[sp,#0x24]
  ldr.w r0,[r8,#0x18]
  adds r2,r3,r5
  ldr r3,[sp,#0x14]
  str r2,[sp,#0x18]
  sub.w lr,r3,r4
  lsrs r2,r2,#0x1
  mov r3,r6
  lsrs.w r10,lr,#0x3
  add.w r2,r2,#0x1
  add r0,r2
  beq 0x2c005f6e
  add.w r2,r6,#0x20
  sub.w r9,r0,r10, lsl #0x2
  ldrb.w r3,[r2,#-0x20]
  adds r2,#0x20
  ldrb.w r1,[r2,#-0x3c]
  lsls r3,r3,#0x14
  ldrb.w r12,[r2,#-0x28]
  lsls r1,r1,#0x18
  and r3,r3,#0xf000000
  and r1,r1,#0xf0000000
  orrs r3,r1
  ldrb.w r1,[r2,#-0x38]
  lsls r1,r1,#0xc
  and r1,r1,#0xf0000
  orrs r3,r1
  ldrb.w r1,[r2,#-0x34]
  lsls r1,r1,#0x10
  and r1,r1,#0xf00000
  orrs r3,r1
  ldrb.w r1,[r2,#-0x30]
  lsls r1,r1,#0x4
  and r1,r1,#0xf00
  orrs r3,r1
  ldrb.w r1,[r2,#-0x2c]
  lsls r1,r1,#0x8
  and r1,r1,#0xf000
  orrs r3,r1
  ldrb.w r1,[r2,#-0x24]
  bic r1,r1,#0xf
  orr.w r1,r1,r12, lsr #0x4
  orrs r3,r1
  str.w r3,[r0,#-0x4]!
  cmp r9,r0
  bne 0x2c005f08
  add.w r3,r6,r10, lsl #0x5
  bic lr,lr,#0x7
  ldr r2,[sp,#0x14]
  orr.w r4,lr,r4
  subs r4,r2,r4
  cmp r4,#0x0
  ble 0x2c005ff2
  ldr r2,[sp,#0x18]
  sub.w lr,r2,lr
  lsl.w r2,lr,#0x8
  and r2,r2,#0x100
  orrs r2,r4
  cmp r2,#0x7
  bhi 0x2c005faa
  subs r2,#0x2
  cmp r2,#0x5
  bhi.w 0x2c006686
  tbh [pc,r2]
  mvn r1,#0x100
  adds r1,r2,r1
  cmp r1,#0x6
  bhi.w 0x2c00663e
  cmp r1,#0x6
  bhi.w 0x2c00663e
  tbh [pc,r1]
  mvn r0,#0x100
  adds r2,r3,r0
  cmp r2,#0x6
  bhi.w 0x2c005ecc
  cmp r2,#0x6
  bhi.w 0x2c005ecc
  tbh [pc,r2]
  bne 0x2c00600c
  ldr r2,[sp,#0x20]
  add.w r3,r11,#0x1
  add.w r5,r5,#0x280
  add r6,r2
  add r7,r2
  ldr r2,[sp,#0x1c]
  cmp r2,r11
  beq 0x2c006022
  mov r11,r3
  b 0x2c005e9c
  ldr r3,[0x2c0061b4]
  mov.w r2,#0x174
  ldr r1,[0x2c0061ac]
  movs r0,#0x3
  str r3,[sp,#0x0]
  str r4,[sp,#0x4]
  ldr r3,[0x2c0061b0]
  bl 0x2c013c4c
  b 0x2c005ff4
  add sp,#0x2c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  b.w 0x2c013d0c
  ldr.w r1,[r8,#0x18]
  lsr.w r0,lr,#0x1
  ldrb r4,[r3,#0x0]
  ldrb r2,[r1,r0]
  add.w lr,r1,lr, lsr #0x1
  bic r4,r4,#0xf
  and r2,r2,#0xf
  orrs r2,r4
  strb r2,[r1,r0]
  ldrb r2,[r3,#0x8]
  ldrb r1,[r3,#0x4]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[lr,#-0x1]
  ldrb r2,[r3,#0x10]
  ldrb r1,[r3,#0xc]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[lr,#-0x2]
  ldrb r2,[r3,#0x14]
  ldrb.w r3,[lr,#-0x3]
  bic r3,r3,#0xf
  orr.w r3,r3,r2, lsr #0x4
  strb.w r3,[lr,#-0x3]
  b 0x2c005ff4
  ldr.w r1,[r8,#0x18]
  lsr.w r0,lr,#0x1
  ldrb r4,[r3,#0x0]
  ldrb r2,[r1,r0]
  add.w lr,r1,lr, lsr #0x1
  bic r4,r4,#0xf
  and r2,r2,#0xf
  orrs r2,r4
  strb r2,[r1,r0]
  ldrb r2,[r3,#0x8]
  ldrb r1,[r3,#0x4]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[lr,#-0x1]
  ldrb r2,[r3,#0x10]
  ldrb r1,[r3,#0xc]
  bic r3,r2,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[lr,#-0x2]
  b 0x2c005ff4
  ldr.w r1,[r8,#0x18]
  lsr.w r0,lr,#0x1
  ldrb r4,[r3,#0x0]
  ldrb r2,[r1,r0]
  add.w lr,r1,lr, lsr #0x1
  bic r4,r4,#0xf
  and r2,r2,#0xf
  orrs r2,r4
  strb r2,[r1,r0]
  ldrb r2,[r3,#0x8]
  ldrb r1,[r3,#0x4]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[lr,#-0x1]
  ldrb r2,[r3,#0xc]
  ldrb.w r3,[lr,#-0x2]
  bic r3,r3,#0xf
  orr.w r3,r3,r2, lsr #0x4
  strb.w r3,[lr,#-0x2]
  b 0x2c005ff4
  ldr.w r1,[r8,#0x18]
  lsr.w r0,lr,#0x1
  ldrb r4,[r3,#0x0]
  ldrb r2,[r1,r0]
  add.w lr,r1,lr, lsr #0x1
  bic r4,r4,#0xf
  and r2,r2,#0xf
  orrs r2,r4
  strb r2,[r1,r0]
  ldrb r2,[r3,#0x8]
  ldrb r1,[r3,#0x4]
  bic r3,r2,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[lr,#-0x1]
  b 0x2c005ff4
  ldr.w r1,[r8,#0x18]
  lsr.w r0,lr,#0x1
  ldrb r4,[r3,#0x0]
  ldrb r2,[r1,r0]
  add.w lr,r1,lr, lsr #0x1
  bic r4,r4,#0xf
  and r2,r2,#0xf
  orrs r2,r4
  strb r2,[r1,r0]
  ldrb r2,[r3,#0x4]
  ldrb.w r3,[lr,#-0x1]
  bic r3,r3,#0xf
  orr.w r3,r3,r2, lsr #0x4
  strb.w r3,[lr,#-0x1]
  b 0x2c005ff4
  ldr.w r1,[r8,#0x18]
  lsr.w r0,lr,#0x1
  ldrb r4,[r3,#0x0]
  ldrb r2,[r1,r0]
  add.w lr,r1,lr, lsr #0x1
  bic r4,r4,#0xf
  and r2,r2,#0xf
  orrs r2,r4
  strb r2,[r1,r0]
  ldrb r2,[r3,#0x8]
  ldrb r1,[r3,#0x4]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[lr,#-0x1]
  ldrb r2,[r3,#0x10]
  ldrb r1,[r3,#0xc]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[lr,#-0x2]
  ldrb r2,[r3,#0x18]
  ldrb r1,[r3,#0x14]
  bic r3,r2,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[lr,#-0x3]
  b 0x2c005ff4
  ldrb r1,[r3,#0x4]
  add.w lr,lr,#0xffffffff
  ldrb r2,[r3,#0x0]
  bic r1,r1,#0xf
  lsr.w r0,lr,#0x1
  orr.w r1,r1,r2, lsr #0x4
  ldr.w r2,[r8,#0x18]
  strb r1,[r2,r0]
  add.w r2,r2,lr, lsr #0x1
  ldrb r1,[r3,#0xc]
  ldrb r0,[r3,#0x8]
  bic r1,r1,#0xf
  orr.w r1,r1,r0, lsr #0x4
  strb.w r1,[r2,#-0x1]
  ldrb r1,[r3,#0x14]
  ldrb r0,[r3,#0x10]
  bic r1,r1,#0xf
  orr.w r1,r1,r0, lsr #0x4
  strb.w r1,[r2,#-0x2]
  ldrb r1,[r3,#0x18]
  ldrb.w r3,[r2,#-0x3]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x3]
  b 0x2c005ff4
  ldrb r1,[r3,#0x4]
  add.w lr,lr,#0xffffffff
  ldrb r2,[r3,#0x0]
  bic r1,r1,#0xf
  lsr.w r0,lr,#0x1
  orr.w r1,r1,r2, lsr #0x4
  ldr.w r2,[r8,#0x18]
  strb r1,[r2,r0]
  add.w r2,r2,lr, lsr #0x1
  ldrb r1,[r3,#0xc]
  ldrb r0,[r3,#0x8]
  bic r1,r1,#0xf
  orr.w r1,r1,r0, lsr #0x4
  strb.w r1,[r2,#-0x1]
  ldrb r1,[r3,#0x14]
  ldrb r0,[r3,#0x10]
  bic r3,r1,#0xf
  orr.w r3,r3,r0, lsr #0x4
  strb.w r3,[r2,#-0x2]
  b 0x2c005ff4
  ldrb r1,[r3,#0x4]
  add.w lr,lr,#0xffffffff
  ldrb r2,[r3,#0x0]
  bic r1,r1,#0xf
  lsr.w r0,lr,#0x1
  orr.w r1,r1,r2, lsr #0x4
  ldr.w r2,[r8,#0x18]
  strb r1,[r2,r0]
  add.w r2,r2,lr, lsr #0x1
  ldrb r1,[r3,#0xc]
  ldrb r0,[r3,#0x8]
  bic r1,r1,#0xf
  orr.w r1,r1,r0, lsr #0x4
  strb.w r1,[r2,#-0x1]
  ldrb r1,[r3,#0x10]
  ldrb.w r3,[r2,#-0x2]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x2]
  b 0x2c005ff4
  ldrb r2,[r3,#0x4]
  add.w lr,lr,#0xffffffff
  ldrb r1,[r3,#0x0]
  bic r2,r2,#0xf
  lsr.w r0,lr,#0x1
  orr.w r2,r2,r1, lsr #0x4
  ldr.w r1,[r8,#0x18]
  strb r2,[r1,r0]
  add.w r1,r1,lr, lsr #0x1
  ldrb r2,[r3,#0xc]
  ldrb r0,[r3,#0x8]
  bic r3,r2,#0xf
  orr.w r3,r3,r0, lsr #0x4
  strb.w r3,[r1,#-0x1]
  b 0x2c005ff4
  ldrb r2,[r3,#0x4]
  add.w lr,lr,#0xffffffff
  ldrb r1,[r3,#0x0]
  ldr.w r0,[r8,#0x18]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  add.w r1,r0,lr, lsr #0x1
  lsr.w lr,lr,#0x1
  strb.w r2,[r0,lr]
  ldrb r2,[r3,#0x8]
  ldrb.w r3,[r1,#-0x1]
  bic r3,r3,#0xf
  orr.w r3,r3,r2, lsr #0x4
  strb.w r3,[r1,#-0x1]
  b 0x2c005ff4
  ldrb r2,[r3,#0x4]
  add.w lr,lr,#0xffffffff
  ldrb r0,[r3,#0x0]
  bic r3,r2,#0xf
  lsr.w r1,lr,#0x1
  ldr.w r2,[r8,#0x18]
  orr.w r3,r3,r0, lsr #0x4
  strb r3,[r2,r1]
  b 0x2c005ff4
  add.w lr,lr,#0xffffffff
  ldr.w r1,[r8,#0x18]
  ldrb r0,[r3,#0x0]
  lsr.w r2,lr,#0x1
  ldrb r3,[r1,r2]
  bic r3,r3,#0xf
  orr.w r3,r3,r0, lsr #0x4
  strb r3,[r1,r2]
  b 0x2c005ff4
  ldr.w r1,[r8,#0x18]
  lsrs r0,r2,#0x1
  ldrb.w r12,[r7,#0x1]
  ldrb r3,[r1,r0]
  add.w r2,r1,r2, lsr #0x1
  bic r12,r12,#0xf
  and r3,r3,#0xf
  orr.w r3,r3,r12
  strb r3,[r1,r0]
  ldrb r3,[r7,#0x9]
  ldrb r1,[r7,#0x5]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  ldrb r3,[r7,#0x11]
  ldrb r1,[r7,#0xd]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x2]
  ldrb.w r3,[r2,#-0x3]
  ldrb r1,[r7,#0x15]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x3]
  b 0x2c005ee0
  ldr.w r1,[r8,#0x18]
  lsrs r0,r2,#0x1
  ldrb.w r12,[r7,#0x1]
  ldrb r3,[r1,r0]
  add.w r2,r1,r2, lsr #0x1
  bic r12,r12,#0xf
  and r3,r3,#0xf
  orr.w r3,r3,r12
  strb r3,[r1,r0]
  ldrb r3,[r7,#0x9]
  ldrb r1,[r7,#0x5]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  ldrb r3,[r7,#0x11]
  ldrb r1,[r7,#0xd]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x2]
  b 0x2c005ee0
  ldr.w r1,[r8,#0x18]
  lsrs r0,r2,#0x1
  ldrb.w r12,[r7,#0x1]
  ldrb r3,[r1,r0]
  add.w r2,r1,r2, lsr #0x1
  bic r12,r12,#0xf
  and r3,r3,#0xf
  orr.w r3,r3,r12
  strb r3,[r1,r0]
  ldrb r3,[r7,#0x9]
  ldrb r1,[r7,#0x5]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  ldrb.w r3,[r2,#-0x2]
  ldrb r1,[r7,#0xd]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x2]
  b 0x2c005ee0
  ldr.w r1,[r8,#0x18]
  lsrs r0,r2,#0x1
  ldrb.w r12,[r7,#0x1]
  ldrb r3,[r1,r0]
  add.w r2,r1,r2, lsr #0x1
  bic r12,r12,#0xf
  and r3,r3,#0xf
  orr.w r3,r3,r12
  strb r3,[r1,r0]
  ldrb r3,[r7,#0x9]
  ldrb r1,[r7,#0x5]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  b 0x2c005ee0
  ldr.w r1,[r8,#0x18]
  lsrs r0,r2,#0x1
  ldrb.w r12,[r7,#0x1]
  ldrb r3,[r1,r0]
  add.w r2,r1,r2, lsr #0x1
  bic r12,r12,#0xf
  and r3,r3,#0xf
  orr.w r3,r3,r12
  strb r3,[r1,r0]
  ldrb.w r3,[r2,#-0x1]
  ldrb r1,[r7,#0x5]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  b 0x2c005ee0
  ldr.w r1,[r8,#0x18]
  lsrs r0,r2,#0x1
  ldrb.w r12,[r7,#0x1]
  ldrb r3,[r1,r0]
  add.w r2,r1,r2, lsr #0x1
  bic r12,r12,#0xf
  and r3,r3,#0xf
  lsls r4,r1,#0xc
  strb r3,[r1,r0]
  ldrb r3,[r7,#0x9]
  ldrb r1,[r7,#0x5]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x1]
  ldrb r3,[r7,#0x11]
  ldrb r1,[r7,#0xd]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x2]
  ldrb r3,[r7,#0x19]
  ldrb r1,[r7,#0x15]
  bic r3,r3,#0xf
  orr.w r3,r3,r1, lsr #0x4
  strb.w r3,[r2,#-0x3]
  b 0x2c005ee0
  ldrb r2,[r7,#0x5]
  lsrs r1,r5,#0x1
  ldrb r3,[r7,#0x1]
  bic r2,r2,#0xf
  orr.w r2,r2,r3, lsr #0x4
  ldr.w r3,[r8,#0x18]
  strb r2,[r3,r1]
  add.w r3,r3,r5, lsr #0x1
  ldrb r2,[r7,#0xd]
  ldrb r1,[r7,#0x9]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[r3,#-0x1]
  ldrb r2,[r7,#0x15]
  ldrb r1,[r7,#0x11]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[r3,#-0x2]
  ldrb.w r2,[r3,#-0x3]
  ldrb r1,[r7,#0x19]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[r3,#-0x3]
  b 0x2c005ee0
  ldrb r2,[r7,#0x5]
  lsrs r1,r5,#0x1
  ldrb r3,[r7,#0x1]
  bic r2,r2,#0xf
  orr.w r2,r2,r3, lsr #0x4
  ldr.w r3,[r8,#0x18]
  strb r2,[r3,r1]
  add.w r3,r3,r5, lsr #0x1
  ldrb r2,[r7,#0xd]
  ldrb r1,[r7,#0x9]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[r3,#-0x1]
  ldrb r2,[r7,#0x15]
  ldrb r1,[r7,#0x11]
  bic r2,r2,#0xf
  orr.w r2,r2,r1, lsr #0x4
  strb.w r2,[r3,#-0x2]
  b 0x2c005ee0
  ldrb r2,[r7,#0x5]
  lsrs r1,r5,#0x1
  ldrb r3,[r7,#0x1]
  bic r2,r2,#0xf
  orr.w r2,r2,r3, lsr #0x4
  ldrb r3,[r7,#0x5]
  lsrs r1,r5,#0x1
  ldrb r2,[r7,#0x1]
  ldrb r3,[r7,#0x5]
  lsrs r0,r5,#0x1
  ldr.w r1,[r8,#0x18]
  ldrb r2,[r7,#0x1]
  bic r3,r3,#0xf
  orr.w r3,r3,r2, lsr #0x4
  ldrb r3,[r7,#0x5]
  ldrb r2,[r7,#0x1]
  bic r3,r3,#0xf
  ldr.w r1,[r8,#0x18]
  orr.w r3,r3,r2, lsr #0x4
  lsrs r2,r5,#0x1
  strb r3,[r1,r2]
  b 0x2c005ee0
  lsrs r2,r5,#0x1
  ldr.w r1,[r8,#0x18]
  ldrb r0,[r7,#0x1]
  ldrb r3,[r1,r2]
  bic r3,r3,#0xf
  orr.w r3,r3,r0, lsr #0x4
  strb r3,[r1,r2]
  b 0x2c005ee0
