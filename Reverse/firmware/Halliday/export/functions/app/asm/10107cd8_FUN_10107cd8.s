; FUN_10107cd8 @ 0x10107cd8 size=148
  push {r4,r5,r6,r7,lr}
  mov r5,r1
  ldr.w r3,[r0,#0x184]
  ldr.w r1,[r0,#0x104]
  mov r4,r0
  ldr.w r6,[r3,r5,lsl #0x2]
  sub sp,#0xc
  cbnz r1,0x10107cfc
  ldrsh.w r1,[r0,#0x12c]
  cbnz r1,0x10107d10
  ldr.w r1,[r0,#0xf8]
  str.w r1,[r0,#0x104]
  mov r0,r2
  bl 0x100f87b8
  ldr.w r3,[r4,#0x184]
  add r0,r6
  str.w r0,[r3,r5,lsl #0x2]
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  ldrsh.w r0,[r0,#0x12a]
  cbnz r0,0x10107d20
  ldr.w r1,[r4,#0xfc]
  str.w r1,[r4,#0x104]
  b 0x10107cfc
  ldr.w r3,[r4,#0xf8]
  str r2,[sp,#0x4]
  smull r7,r12,r0,r3
  asr.w r0,r12, asr #0x1f
  add.w r0,r0,#0x2000
  adds r7,r7,r0
  adc r12,r12,#0x0
  lsr.w r0,r7,#0xe
  orr.w r0,r0,r12, lsl #0x12
  ldr.w r3,[r4,#0xfc]
  smull r7,r12,r1,r3
  asr.w r1,r12, asr #0x1f
  add.w r1,r1,#0x2000
  adds r7,r7,r1
  adc r12,r12,#0x0
  lsr.w r1,r7,#0xe
  orr.w r1,r1,r12, lsl #0x12
  bl 0x100f8518
  ldr r2,[sp,#0x4]
  mov r1,r0
  str.w r0,[r4,#0x104]
  b 0x10107cfc
