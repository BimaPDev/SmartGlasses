; FUN_2c437236 @ 0x2c437236 size=30
  ldmia r5!,{r0,r1,r3,r4,r7}
  ldrh r6,[r1,r2]
  cdp2 p1,0x3,cr10,cr14,cr4,0x0
  push {r1,r2,r3,r5,r7,lr}
  adr r5,[0x2c437268]
  add r1,sp,#0x190
  cmp r3,#0xa0
  strh r1,[r3,r7]
  ldr r5,[r0,r4]
  ldr r2,[sp,#0x1f4]
  strb r7,[r1,r2]
  adr r7,[0x2c437448]
  subs r4,r6,r0
  b 0x2c437124
