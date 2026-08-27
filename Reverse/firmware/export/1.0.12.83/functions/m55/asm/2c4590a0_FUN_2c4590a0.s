; FUN_2c4590a0 @ 0x2c4590a0 size=28
  strh r6,[r3,#0x18]
  strh r2,[r7,#0x18]
  ldrsb r3,[r0,r3]
  strb r5,[r6,#0x1d]
  ldrb r5,[r1,#0x17]
  stmia r5,{r0,r1,r3,r4,r5,r7}
  add r2,sp,#0x29c
  mov pc,pc
  ldrb r0,[r6,#0x4]
  str r0,[r5,#0x50]
  b 0x2c458d46
  push {r0,r1,r3,r4,lr}
  bkpt 0xe6
  bvc 0x2c458fdc
