; FUN_1407166c @ 0x1407166c size=140
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w r9,[0x140716f8]
  add.w r10,r0,#0x6
  ldr.w r8,[r9,r10,lsl #0x2]
  mov r5,r0
  ldrb.w r0,[r8,#0x3c]
  sub sp,#0xc
  cbz r0,0x140716ec
  movs r4,#0x0
  mov r11,r4
  cmp r5,#0x1
  bhi 0x140716e2
  ldr.w r2,[r9,r10,lsl #0x2]
  add.w r3,r11,#0x10
  cbz r2,0x140716e2
  ldrb.w r6,[r2,#0x3c]
  cmp r6,r11
  bls 0x140716e2
  ldr.w r6,[r2,r3,lsl #0x2]
  str r3,[sp,#0x0]
  cbz r6,0x140716e2
  ldr r3,[r6,#0x0]
  movs r2,#0x0
  mov r1,r11
  mov r0,r5
  str r3,[sp,#0x4]
  ldrh r7,[r6,#0x12]
  bl 0x14070608
  mov r0,r6
  bl 0x14074168
  movs r2,#0x0
  ldr r3,[sp,#0x0]
  and r7,r7,#0x80
  str.w r2,[r8,r3,lsl #0x2]
  cbnz r7,0x140716de
  ldr r3,[sp,#0x4]
  cbz r3,0x140716de
  ldr r3,[sp,#0x4]
  mov r2,r11
  ldr r6,[r3,#0x18]
  mov r1,r7
  movs r3,#0x46
  mov r0,r5
  blx r6
  ldrb.w r0,[r8,#0x3c]
  adds r4,#0x1
  uxtb.w r11,r4
  cmp r0,r11
  bhi 0x1407168a
  movs r3,#0x0
  strb.w r3,[r8,#0x3b]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
