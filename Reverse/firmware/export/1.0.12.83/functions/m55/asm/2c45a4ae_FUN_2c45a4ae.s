; FUN_2c45a4ae @ 0x2c45a4ae size=32
  push {r1,r2,r3,r4,r6,r7,lr}
  cbz r6,0x2c45a4b6
  adr r3,[0x2c45a518]
  str r0,[r7,#0xc]
  ldrb r5,[r0,r7]
  ldmia r3,{r0,r1,r2,r3,r6,r7}
  str r7,[r2,#0x68]
  add r5,sp,#0x3e0
  str r2,[sp,#0x1c8]
  pop {r0,r1,r2,r4,r5}
  ldrb r4,[r6,#0x17]
  cdp2 p3,0x1,cr13,cr10,cr13,0x6
  add r6,sp,#0x9c
  ldr r0,[sp,#0x130]
  adds r0,r3,r0
