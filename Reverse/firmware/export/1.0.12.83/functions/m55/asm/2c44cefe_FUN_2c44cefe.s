; FUN_2c44cefe @ 0x2c44cefe size=28
  push {r0,r3,r5,lr}
  ldr r3,[0x2c44d2a4]
  asrs r7,r4,#0x9
  cbz r7,0x2c44cf80
  adr r4,[0x2c44cf1c]
  movs r2,#0x14
  ldrb r3,[r5,#0x14]
  adds r4,r2,#0x2
  cmp r4,#0x19
  cmp r4,#0x6
  strb r3,[r3,#0x16]
  strh r2,[r2,#0x34]
  ldmia r5!,{r1}
  bx r3
