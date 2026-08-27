; FUN_2c4514ba @ 0x2c4514ba size=26
  push {r1,r5,r6,lr}
  add r0,sp,#0xc0
  strh r0,[r6,#0x2e]
  bmi 0x2c451588
  ldrsh r2,[r2,r2]
  ldmia r5,{r0,r4,r5,r7}
  lsrs r7,r2,#0xe
  strh r5,[r2,r5]
  adds r0,r1,#0x0
  bcc 0x2c451556
  strb r4,[r3,#0x1a]
  bkpt 0xd2
  str r6,[r7,#0x6c]
