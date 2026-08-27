; FUN_2c48ed34 @ 0x2c48ed34 size=116
  cmp r0,#0x2
  push {r4,r5,lr}
  sub sp,#0x14
  bhi 0x2c48ed90
  lsrs r3,r1,#0x1f
  bne 0x2c48ed90
  ldr r4,[0x2c48edb0]
  ldr r5,[0x2c48edb4]
  ldr.w r4,[r4,r0,lsl #0x2]
  ldr.w r0,[r5,r0,lsl #0x2]
  cmp r4,#0x0
  bgt 0x2c48ed7a
  cmp r3,r1
  bge 0x2c48ed6e
  cmp r1,#0xe
  bgt 0x2c48ed76
  subs r1,r1,r3
  rsb.w r3,r3,#0xf
  subs r0,r0,r4
  asr.w r12,r3, asr #0x1
  mla r1,r0,r1,r12
  sdiv r3,r1,r3
  add r4,r3
  movs r0,#0x0
  str r4,[r2,#0x0]
  add sp,#0x14
  pop {r4,r5,pc}
  mov r4,r0
  b 0x2c48ed6e
  cmp r4,r0
  bge 0x2c48ed8c
  rsb r3,r4,r4, lsl #0x4
  add.w r3,r3,r0, asr #0x1
  sdiv r3,r3,r0
  b 0x2c48ed50
  movs r3,#0xf
  b 0x2c48ed50
  ldr r5,[0x2c48edb8]
  ldr r4,[0x2c48edbc]
  ldr r3,[0x2c48edc0]
  ldr r2,[0x2c48edc4]
  strd r0,r1,[sp,#0x8]
  strd r4,r5,[sp,#0x0]
  movs r1,#0x57
  movs r0,#0x4
  bl 0x2c673d88
