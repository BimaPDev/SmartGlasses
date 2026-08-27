; FUN_2c14d778 @ 0x2c14d778 size=26
  push {r0,r2,r5,lr}
  ldrsb r0,[r5,r5]
  strh r3,[r6,#0x2c]
  movs r0,#0x6f
  bmi 0x2c14d796
  cbnz r6,0x2c14d79e
  b 0x2c14d0c6
  stmia r7,{r0,r1,r2,r4,r6,r7}
  subs r5,#0x17
  ldr r3,[r6,r6]
  lsrs r1,r0,#0x16
  cmp r6,#0xb4
  ldrb r3,[r7,r0]
