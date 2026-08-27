; FUN_2c453282 @ 0x2c453282 size=20
  push {r1,r2,r3,r4,r7,lr}
  mrc p3,0x5,r10,cr4,cr9,0x4
  adds r7,r7,r5
  ldmia r2!,{r0,r4,r6}
  asrs r4,r5,#0x5
  adr r7,[0x2c453570]
  ldrb r6,[r7,#0xe]
  ldr r7,[r1,#0x3c]
  pop {r1,r3,r4}
