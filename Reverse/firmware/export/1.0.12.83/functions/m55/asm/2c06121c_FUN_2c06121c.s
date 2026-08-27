; FUN_2c06121c @ 0x2c06121c size=24
  strb r0,[r4,#0x1b]
  cmp r7,#0x80
  lsrs r6,r5,#0x9
  adds r0,#0x13
  push {r0,r2,r5,r7,lr}
  add r6,sp,#0x3d8
  strh r2,[r0,r1]
  ldrsb r3,[r3,r0]
  bcs 0x2c0611d8
  lsls r2,r4,#0x8
  ldmia r2!,{r5,r7}
  adr r5,[0x2c0612ac]
