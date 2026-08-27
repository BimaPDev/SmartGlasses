; FUN_2c3191be @ 0x2c3191be size=26
  push {r1,r6,lr}
  bmi 0x2c3191d8
  asrs r3,r4,#0x20
  stmia r0,{r0,r1,r2,r3,r4,r5,r6,r7}
  subs r0,r6,#0x4
  lsls r6,r7,#0xf
  stmia r3,{r3,r5}
  mov r3,lr
  ldr r1,[0x2c319570]
  svc 0x5c
  strh r4,[r4,#0x26]
  ldrb r0,[r0,#0x18]
  asrs r4,r7,#0x3
