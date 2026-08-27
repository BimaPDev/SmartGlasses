; FUN_2c4adc20 @ 0x2c4adc20 size=282
  push {r4,r5,r6,r7,r8,r9,lr}
  ldr r3,[0x2c4add3c]
  sub sp,#0x1c
  ldr r4,[0x2c4add40]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x14]
  mov.w r3,#0x0
  ldr.w r3,[r4,#0x6bc]
  cmp r3,#0x1
  bhi 0x2c4adc6e
  add.w r2,r3,#0x1aa
  ldr.w r6,[r4,r2,lsl #0x2]
  cbz r6,0x2c4adc6e
  mov r9,r0
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r4,#0x6b0]
  mov r8,r1
  ldr.w r0,[r3,#0x6b4]
  add.w r5,r9,#0x7
  add.w r3,r0,#0x10
  bic r7,r5,#0x7
  add r3,r7
  cmp r3,r2
  bcc 0x2c4adcb2
  mov r0,r4
  bl 0x2c4adb40
  cbz r0,0x2c4adc82
  ldr r3,[0x2c4add3c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x14]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c4add36
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  mov.w r3,#0xffffffff
  str r0,[sp,#0x10]
  add r1,sp,#0x4
  movs r0,#0x5
  str r4,[sp,#0x4]
  strd r3,r3,[sp,#0x8]
  bl 0x2c4b4674
  cmp r0,#0x0
  bne 0x2c4adc6e
  ldr.w r3,[r4,#0x6bc]
  ldr r2,[0x2c4add44]
  str r0,[r2,#0x0]
  add.w r2,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r6,[r4,r2,lsl #0x2]
  ldr.w r0,[r3,#0x6b4]
  bic r3,r5,#0x7
  mov r2,r9
  mov r1,r8
  mov.w r9,#0x0
  add r6,r3
  mov.w r8,#0x0
  asrs r5,r5,#0x3
  mov.w r12,#0x0
  add r6,r0
  orr r5,r5,#0x40000000
  strd r8,r9,[r6,#0x0]
  ldr.w r3,[r4,#0x6bc]
  add.w r0,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r0,[r4,r0,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  str r5,[r0,r3]
  ldr.w r3,[r4,#0x6bc]
  add.w r0,r3,#0x1aa
  add.w r3,r4,r3, lsl #0x2
  ldr.w r0,[r4,r0,lsl #0x2]
  ldr.w r3,[r3,#0x6b4]
  add r3,r0
  str.w r12,[r3,#0x4]
  ldr.w r3,[r4,#0x6bc]
  add.w r0,r4,r3, lsl #0x2
  add.w r3,r3,#0x1aa
  ldr.w r5,[r0,#0x6b4]
  ldr.w r0,[r4,r3,lsl #0x2]
  adds r5,#0x8
  add r0,r5
  bl 0x2c674668
  ldr.w r3,[r4,#0x6bc]
  add.w r3,r3,#0x1ac
  add.w r4,r4,r3, lsl #0x2
  ldr r3,[r4,#0x4]
  adds r3,#0x8
  add r7,r3
  str r7,[r4,#0x4]
  b 0x2c4adc6e
  bl 0x2c674828
