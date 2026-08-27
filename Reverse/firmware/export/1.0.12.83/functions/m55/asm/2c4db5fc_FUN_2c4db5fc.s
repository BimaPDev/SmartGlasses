; FUN_2c4db5fc @ 0x2c4db5fc size=148
  push {r4,r5,r6,lr}
  ldrb r3,[r1,#0x2]
  movs r4,#0x0
  ldrb r2,[r1,#0x3]
  and r3,r3,#0x1
  lsls r3,r3,#0x2
  orrs.w r3,r3,r2, lsr #0x6
  ldr r2,[0x2c4db690]
  it eq
  mov.eq r3,#0x8
  strb.w r3,[r0,#0xcc]
  ldrb r3,[r1,#0x2]
  ubfx r3,r3,#0x2,#0x4
  ldr.w r2,[r2,r3,lsl #0x2]
  mov.w r3,#0x400
  strd r3,r4,[r0,#0xd4]
  str.w r3,[r0,#0xe0]
  movs r3,#0x2
  str.w r2,[r0,#0xc8]
  asrs r6,r2,#0x1f
  strb.w r3,[r0,#0xcd]
  mov.w r3,#0x210
  strh.w r3,[r0,#0xce]
  ldrb r3,[r1,#0x3]
  and r4,r3,#0x3
  ldrb r3,[r1,#0x4]
  ldrb r1,[r1,#0x5]
  lsls r3,r3,#0x3
  orr.w r3,r3,r4, lsl #0xb
  orr.w r3,r3,r1, lsr #0x5
  umull r2,r1,r3,r2
  mov r4,r2
  mla r5,r3,r6,r1
  orrs.w r5,r4,pc, lsl #0x3
  cmp r5,#0x0
  mov r3,r4
  mov r2,r5
  bge 0x2c4db676
  movw r2,#0x3ff
  adds r3,r4,r2
  adc r2,r5,#0x0
  mov r4,r3
  mov r5,r2
  mov.w r3,#0x1000
  movs r2,#0x7
  orrs.w r5,r4,pc, asr #0xa
  str.w r4,[r0,#0xe8]
  strd r3,r2,[r0,#0x20]
  movs r0,#0x1
  pop {r4,r5,r6,pc}
