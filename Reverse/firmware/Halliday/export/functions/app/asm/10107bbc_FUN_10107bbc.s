; FUN_10107bbc @ 0x10107bbc size=138
  push {r4,r5,r6,r7,lr}
  mov r4,r0
  ldr.w r0,[r0,#0x104]
  mov r5,r1
  sub sp,#0xc
  cbnz r0,0x10107bd8
  ldrsh.w r1,[r4,#0x12c]
  cbnz r1,0x10107bec
  ldr.w r0,[r4,#0xf8]
  str.w r0,[r4,#0x104]
  mov r1,r0
  mov r0,r2
  ldr.w r4,[r4,#0x184]
  bl 0x100f87b8
  str.w r0,[r4,r5,lsl #0x2]
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  ldrsh.w r0,[r4,#0x12a]
  cbnz r0,0x10107bfc
  ldr.w r0,[r4,#0xfc]
  str.w r0,[r4,#0x104]
  b 0x10107bd8
  ldr.w r3,[r4,#0xf8]
  str r2,[sp,#0x4]
  smull r6,r7,r0,r3
  asr.w r0,r7, asr #0x1f
  add.w r0,r0,#0x2000
  adds r6,r6,r0
  adc r7,r7,#0x0
  lsr.w r0,r6,#0xe
  orr.w r0,r0,r7, lsl #0x12
  ldr.w r3,[r4,#0xfc]
  smull r6,r7,r1,r3
  asr.w r1,r7, asr #0x1f
  add.w r1,r1,#0x2000
  adds r6,r6,r1
  adc r7,r7,#0x0
  lsr.w r1,r6,#0xe
  orr.w r1,r1,r7, lsl #0x12
  bl 0x100f8518
  ldr r2,[sp,#0x4]
  str.w r0,[r4,#0x104]
  b 0x10107bd8
