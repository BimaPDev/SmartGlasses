; FUN_2c448856 @ 0x2c448856 size=34
  push {r3,r5,lr}
  strh r7,[r7,#0x10]
  cmp r1,#0x5a
  adr r0,[0x2c448894]
  subs r6,#0x94
  ldmia r1!,{r2,r3,r4}
  ldrh r3,[r3,r2]
  asrs r2,r1,#0x13
  cmp r0,#0x92
  cbnz r6,0x2c448878
  ldrd r6,r4,[r5],#0x314
  ldrh r3,[r0,#0x0]
  str r6,[r3,#0x30]
  blx 0x2ba004f0
  str r3,[r5,#0x6c]
