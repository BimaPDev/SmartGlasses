; FUN_2c2bf53a @ 0x2c2bf53a size=24
  push {r0,r1,r3,r4,r6,lr}
  asrs r5,r2,#0x1
  lsls r0,r0,#0x1c
  cmp r7,#0xc0
  ldr r7,[0x2c2bf5c4]
  ldmia r4!,{r2,r3,r6,r7}
  adds r0,#0xcf
  cdp p15,0x0,cr14,cr2,cr14,0x7
  ldr r6,[0x2c2bf900]
  str r0,[r0,r0]
  adds r0,#0xf
