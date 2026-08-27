; FUN_2c539c42 @ 0x2c539c42 size=298
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  cmp r1,#0x0
  sub sp,#0xc
  asr.w r9,r1, asr #0x2
  ldr.w r10,[0x2c539d70]
  mov r7,r3
  str r0,[sp,#0x4]
  mul r9,r10,r9
  ble.w 0x2c539d66
  mov r4,r2
  ldrd r1,r2,[r3,#0x0]
  subs r0,r1,r2
  cmp r1,r2
  asr.w r0,r0, asr #0x2
  mul r0,r10,r0
  bne 0x2c539d00
  ldr r3,[r7,#0xc]
  movs r6,#0x12
  ldr.w r5,[r3,#-0x4]
  add.w r5,r5,#0x1f8
  cmp r6,r9
  it ge
  mov.ge r6,r9
  rsb r8,r6,r6, lsl #0x3
  lsls r3,r6,#0x3
  lsl.w r12,r8,#0x2
  str r3,[sp,#0x0]
  sbfx r3,r8,#0x0,#0x1e
  cmp.w r12,#0x0
  sub.w r8,r4,r8, lsl #0x2
  mul r11,r10,r3
  ble 0x2c539cd2
  ldr.w r1,[r4,#-0x1c]
  subs r5,#0x1c
  ldr r0,[r5,#0x0]
  subs r4,#0x1c
  bl 0x2c53bfe4
  ldr r1,[r4,#0x8]
  ldr r0,[r5,#0x8]
  bl 0x2c53bfe4
  ldr r1,[r4,#0x4]
  ldr r0,[r5,#0x4]
  bl 0x2c53bfe4
  subs.w r11,r11,#0x1
  bne 0x2c539ca2
  ldrd r1,r2,[r7,#0x0]
  subs r0,r1,r2
  asrs r0,r0,#0x2
  mul r0,r10,r0
  subs r0,r0,r6
  bmi 0x2c539d58
  cmp r0,#0x11
  bgt 0x2c539d06
  ldr r3,[sp,#0x0]
  sub.w r9,r9,r6
  sub.w r11,r6,r3
  cmp.w r9,#0x0
  add.w r1,r1,r11, lsl #0x2
  str r1,[r7,#0x0]
  ble 0x2c539d42
  subs r0,r1,r2
  cmp r1,r2
  mov r4,r8
  asr.w r0,r0, asr #0x2
  mul r0,r10,r0
  beq 0x2c539c72
  mov r6,r0
  mov r5,r1
  b 0x2c539c7e
  ldr r3,[0x2c539d6c]
  smull r2,r3,r3,r0
  asrs r2,r0,#0x1f
  rsb r3,r2,r3, asr #0x2
  ldr r2,[r7,#0xc]
  sub.w r9,r9,r6
  add.w r1,r2,r3, lsl #0x2
  cmp.w r9,#0x0
  str r1,[r7,#0xc]
  add.w r1,r3,r3, lsl #0x3
  ldr.w r2,[r2,r3,lsl #0x2]
  sub.w r0,r0,r1, lsl #0x1
  add.w r3,r2,#0x1f8
  str r2,[r7,#0x4]
  rsb r0,r0,r0, lsl #0x3
  str r3,[r7,#0x8]
  add.w r1,r2,r0, lsl #0x2
  str r1,[r7,#0x0]
  bgt 0x2c539cf0
  ldr r4,[sp,#0x4]
  ldrd r0,r3,[r7,#0x8]
  strd r1,r2,[r4,#0x0]
  strd r0,r3,[r4,#0x8]
  mov r0,r4
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  mvns r3,r0
  ldr r2,[0x2c539d6c]
  umull r2,r3,r2,r3
  mvn.w r3,r3, lsr #0x2
  b 0x2c539d12
  ldrd r1,r2,[r3,#0x0]
  b 0x2c539d42
