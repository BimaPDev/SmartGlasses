; FUN_2c447428 @ 0x2c447428 size=32
  lsls r5,r6,#0x13
  subs r0,#0x7c
  ldr r2,[r3,r0]
  adr r5,[0x2c447408]
  movs r0,#0x88
  ldmia r4,{r1,r2,r4}
  sxtb r1,r1
  subs r2,#0x98
  adr r4,[0x2c4475fc]
  push {r0,r1,r2,r4,r5,r7,lr}
  b 0x2c447ada
  bkpt 0xbf
  ldr r2,[0x2c447e7c]
  svc 0xbc
  ldrh r3,[r1,#0x10]
  b 0x2c4473fa
