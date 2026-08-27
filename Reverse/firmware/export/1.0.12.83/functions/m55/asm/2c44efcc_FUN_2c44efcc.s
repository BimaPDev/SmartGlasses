; FUN_2c44efcc @ 0x2c44efcc size=32
  push {r2,r4,r5,r6,lr}
  add r2,sp,#0x268
  ldr r1,[sp,#0x3f0]
  ldr r2,[r7,#0x48]
  ldr r0,[0x2c44f36c]
  blx 0x2ca78adc
  subs r5,r2,r4
  subs r3,#0x81
  lsls r6,r7,#0x13
  stmia r1!,{r2,r3,r4,r5,r6}
  adr r5,[0x2c44f194]
  adds r4,#0x30
  str r3,[r3,#0x50]
  subs r3,#0x26
  lsls r5,r4,#0x1b
