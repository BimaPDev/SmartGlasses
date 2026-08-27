; FUN_2c44671a @ 0x2c44671a size=20
  push {r3,r4,r5,r7,lr}
  blx 0x2c681174
  push {r7}
  subs r6,#0x1a
  adds r1,#0x7e
  ldmia r0!,{r1}
  uxth r0,r5
  ldrb r4,[r4,#0x9]
  add r5,sp,#0x2e4
