; FUN_100fbad0 @ 0x100fbad0 size=100
  push {r4,r5,r6,r7}
  ldr r5,[r0,#0x2c]
  ldr.w r12,[r0,#0x1c]
  subs r3,r5,#0x1
  mov r7,r0
  sub.w r6,r12,r5, lsl #0x2
  bmi 0x100fbb06
  mov r2,r12
  b 0x100fbaea
  subs r3,#0x1
  bcc 0x100fbb06
  ldr.w r4,[r2,#-0x4]!
  cmp r4,r1
  bgt 0x100fbae6
  bge 0x100fbb24
  adds r3,#0x1
  add.w r3,r6,r3, lsl #0x2
  mov r2,r1
  ldr.w r1,[r3,#-0x4]!
  cmp r6,r3
  str r2,[r3,#0x0]
  bne 0x100fbafa
  ldrd r3,r2,[r7,#0x20]
  subs r3,#0x4
  cmp r3,r2
  str r3,[r7,#0x20]
  bls 0x100fbb2a
  adds r5,#0x1
  rsb r3,r5,r5, lsl #0x1e
  str r5,[r7,#0x2c]
  movs r0,#0x0
  pop {r4,r5,r6,r7}
  str.w r1,[r12,r3,lsl #0x2]
  bx lr
  movs r0,#0x0
  pop {r4,r5,r6,r7}
  bx lr
  movs r3,#0x62
  movs r0,#0x1
  str r3,[r7,#0x28]
  pop {r4,r5,r6,r7}
  bx lr
