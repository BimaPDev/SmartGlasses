; FUN_2c44f3a8 @ 0x2c44f3a8 size=38
  push {r0,r2,r3,r7,lr}
  ldmia r3!,{r2}
  add r7,sp,#0x1fc
  ldrb r5,[r7,#0x1f]
  vsra.s16 q13,q14,#0x1
  movs r7,#0xb3
  b 0x2c44f8cc
  orrs r2,r5,#0x6a8000
  ldr r3,[sp,#0x26c]
  str r4,[r6,#0x20]
  stc2l p5,cr2,[r8],#-0x14c
  ldr r2,[0x2c44fbac]
  stc p5,cr14,[r0,#-0x1b8]
  adds r6,#0x8e
  str r4,[r3,r5]
