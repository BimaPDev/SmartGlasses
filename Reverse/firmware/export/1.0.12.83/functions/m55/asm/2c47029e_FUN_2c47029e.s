; FUN_2c47029e @ 0x2c47029e size=42
  push {r4,r5,r6,lr}
  ldr r5,[0x2c470364]
  sub sp,#0x10
  str r5,[sp,#0x4]
  add r5,sp,#0x20
  ldrb.w r4,[sp,#0x44]
  ldrb.w r6,[sp,#0x40]
  stm r5,{r0,r1,r2,r3}
  ldr r0,[0x2c470368]
  movw r1,#0x44a
  ldr r3,[0x2c47036c]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r2,[0x2c470370]
  ldr r5,[sp,#0x28]
  bl 0x2c673d88
