; FUN_2c0f9156 @ 0x2c0f9156 size=26
  push {r1,r4,r5,r6,r7,lr}
  ldrb r5,[r3,#0xf]
  stmia r7!,{r0,r1,r2,r4,r5,r6}
  adr r2,[0x2c0f935c]
  mrc p7,0x1,r3,cr12,cr6,0x7
  ldc2 p11,cr7,[r10,#0x1ec]
  add r6,sp,#0x24
  cmp r4,#0xff
  movs r6,#0x84
  asrs r2,r7,#0x3
  subs r3,r4,r4
