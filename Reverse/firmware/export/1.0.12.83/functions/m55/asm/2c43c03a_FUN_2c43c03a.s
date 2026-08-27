; FUN_2c43c03a @ 0x2c43c03a size=16
  push {r0,r2,r7,lr}
  ldmia r7!,{r0,r2,r4,r5}
  ldr r7,[0x2c43c318]
  ldrb r1,[r6,#0x14]
  asrs r7,r2,#0x3
  svc 0x98
  blx r5
  sxth r5,r3
