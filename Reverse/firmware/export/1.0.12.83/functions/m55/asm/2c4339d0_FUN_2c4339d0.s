; FUN_2c4339d0 @ 0x2c4339d0 size=26
  push {r3,r4,r5,r6,r7,lr}
  bl 0x2bf20942
  add r2,sp,#0x3d8
  cmp r0,#0x58
  strh r6,[r0,#0x36]
  asrs r7,r1,#0x5
  stmia r5!,{r0,r1,r6}
  adds r0,#0x62
  subs r1,#0x46
  subs r1,#0x5c
  asrs r5,r1,#0xb
  ldrb r0,[r6,#0x7]
