; FUN_2c0f5528 @ 0x2c0f5528 size=30
  push {lr}
  stmia r2,{r1,r2,r3,r4,r5,r6}
  subs r3,#0x20
  b 0x2c0f556c
  adds r7,r1,r4
  ldr r0,[r4,#0x6c]
  lsls r1,r0,#0xa
  adds r2,r1,r4
  ldrb r5,[r7,#0x1b]
  lsls r1,r2,#0xe
  adds r3,r1,r4
  cdp p4,0xf,cr0,cr13,cr1,0x1
  adds r4,r1,r4
  udf #0xfd
