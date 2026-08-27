; FUN_2c474018 @ 0x2c474018 size=144
  cmp r0,#0x4
  bls 0x2c47407c
  mov.w r12,#0x1c
  push {r4,r5,r6,r7,lr}
  movs r4,#0x0
  ldrb r2,[r1,#0x1]
  ldrb r6,[r1,#0x2]
  rsb r5,r0,r0, lsl #0x3
  mov r3,r4
  mov r7,r4
  mov lr,r1
  orrs.w r3,r2,pc, lsl #0x7
  orrs.w r7,r6,pc, lsl #0xe
  and r0,r2,#0x3f80
  and r6,r6,#0x1fc000
  ldrb.w r2,[lr,#0x3]!
  mov r3,r4
  orrs r0,r6
  ldrb r6,[r1,#0x0]
  orrs.w r3,r2,pc, lsl #0x15
  and r2,r2,#0xfe00000
  and r6,r6,#0x7f
  mov r1,r4
  orrs r0,r6
  mov r6,r4
  orrs r0,r2
  ldrb.w r4,[lr,#0x1]!
  mov r3,r6
  and r2,r4,#0x7f
  ldrb r3,[r1,#0x0]
  cmp r0,#0x1
  and r3,r3,#0x7f
  bls 0x2c4740b4
  ldrb r2,[r1,#0x1]
  cmp r0,#0x2
  lsl.w r2,r2,#0x7
  and r2,r2,#0x3f80
  orr.w r3,r3,r2
  beq 0x2c4740b4
  ldrb r2,[r1,#0x2]
  cmp r0,#0x3
  lsl.w r2,r2,#0xe
  and r2,r2,#0x1fc000
  orr.w r3,r3,r2
  beq 0x2c4740b4
  ldrb r2,[r1,#0x3]
  lsls r2,r2,#0x15
  and r2,r2,#0xfe00000
  orrs r3,r2
  mov r0,r3
  movs r1,#0x0
  bx lr
