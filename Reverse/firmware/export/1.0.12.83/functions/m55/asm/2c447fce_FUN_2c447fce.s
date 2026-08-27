; FUN_2c447fce @ 0x2c447fce size=50
  push {r0,r1,r2,r3,r4,r7,lr}
  subs r3,r0,#0x4
  subs r3,r2,#0x4
  str r6,[sp,#0x1a4]
  ldmia r6,{r0,r1,r2,r3,r6}
  movs r1,#0x3e
  ldmia r5,{r0,r1,r2,r5}
  lsls r6,r6,#0x11
  subs r7,#0xfc
  b 0x2c4485a6
  ldrh r2,[r2,r1]
  asrs r7,r4,#0x1d
  ldr r6,[sp,#0x30c]
  str r3,[sp,#0x1b8]
  subs r6,r6,#0x7
  ldmia r2!,{r0,r1,r3,r4,r6,r7}
  b 0x2c448696
  sbcs r2,r0
  str r7,[sp,#0x318]
  add r0,r1
  ssat r10,#0x19,r7,lsl #0x1
  ldr r1,[0x2c448818]
  lsls r1,r4,#0xc
  ldr r5,[r1,#0x8]
