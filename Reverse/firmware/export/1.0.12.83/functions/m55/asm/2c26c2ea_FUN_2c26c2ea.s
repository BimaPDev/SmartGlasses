; FUN_2c26c2ea @ 0x2c26c2ea size=38
  subs r7,#0x0
  stmia r0!,{r1,r3,r4,r5,r6,r7}
  asrs r7,r5,#0x19
  vshr.u64 q8,q14,#0x1
  ldr r3,[sp,#0x0]
  b 0x2c26b8f8
  push {r1,r2,r4,r5,r6,r7,lr}
  lsls r0,r3,#0x3
  lsls r4,r5,#0x1
  mrrc2 p15,0xa,r0,pc,cr0
  lsrs r0,r4,#0x11
  cmp r2,#0xb2
  lsrs r0,r6,#0xe
  subs r7,#0xef
  movw lr,#0xe00
  b 0x2c26bd02
