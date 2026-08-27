; FUN_2c45443e @ 0x2c45443e size=32
  push {r0,r3,r4,r6,lr}
  asrs r3,r5,#0xc
  ldrh r0,[r2,#0x1e]
  str r5,[sp,#0x2b0]
  subs r4,#0x68
  ldrb r3,[r3,r6]
  lsrs r4,r7,#0x2
  svc 0x48
  ldc p1,cr2,[r2],{0x47}
  ldrb r6,[r0,#0x3]
  lsrs r1,r6,#0x16
  ldmia r0!,{r1,r4,r5,r7}
  str r0,[r3,r5]
  add r6,sp,#0x14
  blx r10
