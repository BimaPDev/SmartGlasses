; FUN_2c30b2ac @ 0x2c30b2ac size=24
  push {r0,r1,r2,r4,r7,lr}
  ldr r2,[r4,#0x60]
  ldr r0,[sp,#0x110]
  vqsub.u8 d21,d27,d10
  adr r4,[0x2c30b650]
  ldrb r3,[r1,#0x1]
  str r2,[r2,#0x18]
  stmia r2,{r2,r5,r6}
  ldmia r5!,{r0,r1,r3,r7}
  stmia r0!,{r2,r3,r4,r5}
  asrs r2,r4,#0x20
