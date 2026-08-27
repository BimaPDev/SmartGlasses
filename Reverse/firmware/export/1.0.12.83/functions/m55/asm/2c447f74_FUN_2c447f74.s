; FUN_2c447f74 @ 0x2c447f74 size=36
  push {r0,r2,r3,r4,r6,lr}
  cmp r0,#0xce
  movs r6,r1
  ldrb r0,[r0,r4]
  cmp r7,#0x7c
  mrc2 p4,0x2,APSR_nzcv,cr5,cr15,0x6
  strb r4,[r6,#0x17]
  lsls r1,r3,#0x3
  lsls r0,r0,#0xc
  ldr r7,[0x2c448000]
  ldrb r1,[r0,#0x17]
  cdp2 p7,0x7,cr15,cr11,cr15,0x3
  add r3,sp,#0x378
  ldr r5,[r1,#0x1c]
  stmia r0,{r0,r3,r6}
  movs r0,r0
