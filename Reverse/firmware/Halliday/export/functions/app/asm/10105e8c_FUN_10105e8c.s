; FUN_10105e8c @ 0x10105e8c size=146
  push {r4,r5,r6,lr}
  ldr.w r3,[r0,#0x184]
  mov r4,r0
  ldr.w r0,[r0,#0x104]
  ldr.w r5,[r3,r1,lsl #0x2]
  cbnz r0,0x10105eac
  ldrsh.w r1,[r4,#0x12c]
  cbnz r1,0x10105ec8
  ldr.w r0,[r4,#0xf8]
  str.w r0,[r4,#0x104]
  smull r3,r2,r0,r5
  asr.w r0,r2, asr #0x1f
  add.w r0,r0,#0x8000
  adds r3,r3,r0
  adc r2,r2,#0x0
  lsr.w r0,r3,#0x10
  orr.w r0,r0,r2, lsl #0x10
  pop {r4,r5,r6,pc}
  ldrsh.w r0,[r4,#0x12a]
  cbnz r0,0x10105ed8
  ldr.w r0,[r4,#0xfc]
  str.w r0,[r4,#0x104]
  b 0x10105eac
  ldr.w r3,[r4,#0xf8]
  smull r2,r6,r0,r3
  asr.w r0,r6, asr #0x1f
  add.w r0,r0,#0x2000
  adds r2,r2,r0
  adc r6,r6,#0x0
  lsr.w r0,r2,#0xe
  orr.w r0,r0,r6, lsl #0x12
  ldr.w r3,[r4,#0xfc]
  smull r2,r6,r1,r3
  asr.w r1,r6, asr #0x1f
  add.w r1,r1,#0x2000
  adds r2,r2,r1
  adc r6,r6,#0x0
  lsr.w r1,r2,#0xe
  orr.w r1,r1,r6, lsl #0x12
  bl 0x100f8518
  str.w r0,[r4,#0x104]
  b 0x10105eac
