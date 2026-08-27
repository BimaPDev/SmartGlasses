; FUN_2c4eff80 @ 0x2c4eff80 size=128
  push {r4,r5,lr}
  asr.w lr,r2, asr #0x1
  adds r4,r0,#0x1
  b 0x2c4effb4
  sub.w r5,r2,#0x61
  cmp r5,#0x5
  bls 0x2c4effee
  subs r2,#0x30
  uxtb r2,r2
  cmp r2,#0x9
  bhi 0x2c4efffc
  sub.w r5,r3,#0x41
  cmp r5,#0x5
  bhi 0x2c4effd0
  subs r3,#0x37
  uxtb r3,r3
  adds r1,#0x1
  orr.w r3,r3,r2, lsl #0x4
  cmp lr,r1
  strb.w r3,[r12,#0x1]!
  ble 0x2c4effea
  ldrb.w r2,[r0,r1,lsl #0x1]
  ldrb.w r3,[r4,r1,lsl #0x1]
  sub.w r5,r2,#0x41
  cmp r5,#0x5
  bhi 0x2c4eff8a
  sub.w r5,r3,#0x41
  subs r2,#0x37
  cmp r5,#0x5
  uxtb r2,r2
  bls 0x2c4effa2
  sub.w r5,r3,#0x61
  cmp r5,#0x5
  bhi 0x2c4efff4
  subs r3,#0x57
  adds r1,#0x1
  uxtb r3,r3
  cmp lr,r1
  orr.w r3,r3,r2, lsl #0x4
  strb.w r3,[r12,#0x1]!
  bgt 0x2c4effb4
  movs r0,#0x0
  pop {r4,r5,pc}
  subs r2,#0x57
  uxtb r2,r2
  b 0x2c4eff9a
  subs r3,#0x30
  uxtb r3,r3
  cmp r3,#0x9
  bls 0x2c4effa6
  movs r0,#0x1
  pop {r4,r5,pc}
