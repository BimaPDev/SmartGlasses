; FUN_2c114ac6 @ 0x2c114ac6 size=28
  push {r7,lr}
  str r0,[r0,#0x68]
  ldrh r0,[r4,#0x4]
  ldr r6,[r0,#0x50]
  adr r0,[0x2c114ae4]
  movs r0,r1
  subs r0,r5,r5
  cmp r4,#0x6
  ldrsh r0,[r0,r0]
  movs r0,r0
  subs r6,r0,r4
  ldr r0,[r4,r7]
  ldrh r1,[r0,#0x2]
  ldmia r6,{r0,r1,r3,r6}
