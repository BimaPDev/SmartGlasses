; FUN_14043fa8 @ 0x14043fa8 size=456
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  sub sp,#0x3c
  mov r4,r0
  mov r6,r1
  mov r9,r3
  ldrb.w r8,[sp,#0x60]
  str.w lr,[sp,#0x34]
  str r2,[sp,#0x2c]
  mrs r11,basepri
  cmp.w r11,#0x40
  beq 0x14043ff0
  mov r5,pc
  ldr r0,[0x14044170]
  ldr r2,[0x14044174]
  ldrb r1,[r0,#0x0]
  ldr r3,[0x14044178]
  str r5,[r2,#0x0]
  str.w lr,[r2,#0x4]
  adds r2,r1,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x1404417c]
  str.w lr,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[sp,#0x2c]
  ldr.w r10,[0x14044198]
  strd r6,r3,[sp,#0x10]
  rsb r5,r4,r4, lsl #0x3
  str.w r9,[sp,#0x24]
  str.w r8,[sp,#0x1c]
  str r4,[sp,#0x4]
  add.w r5,r10,r5, lsl #0x3
  ldrh.w r3,[r5,#0x454]
  rsb r12,r4,r4, lsl #0x3
  str r3,[sp,#0x20]
  ldrh.w r3,[r5,#0x452]
  lsl.w r7,r12,#0x3
  str r3,[sp,#0x18]
  ldrh.w r3,[r5,#0x450]
  movs r1,#0xf9
  str r3,[sp,#0xc]
  ldrb.w r3,[r5,#0x45e]
  movs r0,#0x4
  str r3,[sp,#0x8]
  ldr r3,[0x14044180]
  ldr r2,[0x14044184]
  str r3,[sp,#0x0]
  ldr r3,[0x14044188]
  str r7,[sp,#0x30]
  bl 0x1402a6e8
  ldrb.w r3,[r5,#0x45e]
  lsls r0,r4,#0x3
  cbnz r3,0x14044064
  ldrh.w r3,[r5,#0x450]
  cmp r3,r6
  bcs 0x140440da
  uxth.w r2,r8
  ldr r3,[sp,#0x30]
  movs r5,#0x1
  addw r3,r3,#0x456
  add r3,r10
  b 0x1404407a
  ldrh.w r3,[r5,#0x456]
  cmp r3,r6
  beq 0x14044132
  uxth.w r2,r8
  movs r5,#0x0
  ldr r3,[sp,#0x30]
  add.w r3,r3,#0x460
  add r3,r10
  strh r2,[r3,#0x4]
  movs r2,#0x1
  ldr r1,[sp,#0x2c]
  strh r6,[r3,#0x0]
  strh r1,[r3,#0x2]
  strh.w r9,[r3,#0x6]
  strh r2,[r3,#0x8]
  cmp.w r11,#0x0
  bne 0x14044098
  mov.w r2,#0xffffffff
  ldr r3,[0x14044174]
  str r2,[r3,#0x0]
  ldr r1,[0x1404418c]
  ldr r6,[0x14044190]
  ldrb r2,[r1,#0x0]
  ldr r7,[sp,#0x34]
  ldr r3,[0x14044178]
  str.w r7,[r6,r2,lsl #0x2]
  adds r2,#0x1
  umull r6,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r11
  subs r4,r0,r4
  add.w r4,r10,r4, lsl #0x3
  ldr.w r0,[r4,#0x46c]
  cmp r0,#0x0
  beq 0x1404415a
  movw r1,#0x1388
  bl 0x140e5378
  mov r0,r5
  add sp,#0x3c
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r2,[sp,#0x2c]
  cmp r3,r2
  bhi 0x14044054
  ldr r3,[0x14044178]
  umull r2,r3,r3,r9
  ldrh.w r2,[r5,#0x454]
  cmp.w r2,r3, lsr #0x3
  bne 0x14044054
  ldrh.w r3,[r5,#0x452]
  uxth.w r2,r8
  cmp r3,r8
  bne 0x14044058
  cmp.w r11,#0x0
  bne 0x1404410a
  mov.w r2,#0xffffffff
  ldr r3,[0x14044174]
  str r2,[r3,#0x0]
  ldr r1,[0x1404418c]
  ldr r0,[sp,#0x34]
  ldrb r2,[r1,#0x0]
  ldr r3,[0x14044190]
  str.w r0,[r3,r2,lsl #0x2]
  ldr r3,[0x14044178]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r11
  movs r5,#0x0
  b 0x140440d2
  ldrh.w r3,[r5,#0x458]
  ldr r2,[sp,#0x2c]
  cmp r3,r2
  bne 0x1404406c
  ldr r3,[0x14044178]
  umull r2,r3,r3,r9
  ldrh.w r2,[r5,#0x45c]
  cmp.w r2,r3, lsr #0x3
  bne 0x1404406c
  ldrh.w r3,[r5,#0x45a]
  uxth.w r2,r8
  cmp r3,r8
  bne 0x14044070
  b 0x140440fc
  ldr r3,[sp,#0x30]
  mov r1,r0
  addw r2,r3,#0x43c
  ldr r0,[0x14044194]
  add r2,r10
  bl 0x140e52f8
  str.w r0,[r4,#0x46c]
  b 0x140440ca
