; FUN_100af514 @ 0x100af514 size=184
  movs r3,#0xc8
  ldr r2,[0x100af5cc]
  push {r0,r1,r4,r5,r6,r7,r8,r9,r10,lr}
  muls r2,r0
  mov r7,r0
  sdiv r2,r2,r3
  movs r6,#0x0
  cmn r2,#0x8000
  blt 0x100af5a8
  cmp.w r2,#0x8000
  bgt 0x100af5b0
  movs r3,#0x0
  mov.w r0,#0x400
  mov.w r1,#0x8000
  mov r12,r3
  ldr.w lr,[0x100af5d8]
  smull r4,r5,r1,r2
  lsrs r1,r4,#0xf
  ldr.w r4,[lr],#0x4
  asr.w r10,r5, asr #0xf
  mov r8,r4
  asr.w r9,r4, asr #0x1f
  strd r8,r9,[sp,#0x0]
  mul r8,r4,r10
  orr.w r1,r1,r5, lsl #0x11
  ldr r5,[sp,#0x4]
  add.w r12,r12,#0x1
  mla r8,r1,r5,r8
  umull r4,r5,r4,r1
  adds r3,r3,r4
  add r5,r8
  adc.w r0,r5,r0
  cmp.w r12,#0x6
  bne 0x100af542
  lsrs r3,r3,#0x1b
  cmp r6,#0x0
  orr.w r0,r3,r0, lsl #0x5
  ble 0x100af5a2
  cmp r7,#0x0
  mov.w r3,#0x0
  bge 0x100af5b8
  ldr r2,[0x100af5d0]
  smull r4,r5,r0,r2
  adds r3,#0x1
  lsrs r0,r4,#0x1b
  cmp r6,r3
  orr.w r0,r0,r5, lsl #0x5
  bne 0x100af592
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  add.w r2,r2,#0x8000
  adds r6,#0x1
  b 0x100af526
  sub.w r2,r2,#0x8000
  adds r6,#0x1
  b 0x100af52c
  ldr r2,[0x100af5d4]
  smull r4,r5,r0,r2
  adds r3,#0x1
  lsrs r0,r4,#0x1b
  cmp r6,r3
  orr.w r0,r0,r5, lsl #0x5
  bne 0x100af5ba
  b 0x100af5a2
