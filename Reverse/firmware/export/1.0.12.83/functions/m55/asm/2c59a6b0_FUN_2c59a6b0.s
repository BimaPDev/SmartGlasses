; FUN_2c59a6b0 @ 0x2c59a6b0 size=32
  ldr r1,[0x2c59a6e0]
  ldr r3,[0x2c59a6e4]
  ldr r2,[0x2c59a6e8]
  push {r4,r5,lr}
  mov r4,r0
  sub sp,#0x14
  ldrb r5,[r1,#0x0]
  ldr r1,[0x2c59a6ec]
  stm sp,{r2,r3,r4,r5}
  strb r0,[r1,#0x0]
  movs r2,#0x93
  ldr r1,[0x2c59a6f0]
  movs r0,#0x4
  bl 0x2c62c82c
