; FUN_2c4533ec @ 0x2c4533ec size=24
  push {r0,r3,r5,lr}
  ldr r5,[r1,#0x6c]
  bkpt 0xc9
  add r3,sp,#0x50
  strb r6,[r7,#0x16]
  ldrh r1,[r2,#0x18]
  subs r1,#0xa5
  cmp r7,#0xe3
  subs r7,#0x48
  ldmia r1,{r1,r4,r5,r6,r7}
  str r6,[r3,#0x50]
  ldr r1,[sp,#0x31c]
