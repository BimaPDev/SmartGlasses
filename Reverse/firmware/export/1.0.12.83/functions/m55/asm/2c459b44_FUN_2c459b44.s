; FUN_2c459b44 @ 0x2c459b44 size=20
  push {r2,r4,r6,lr}
  b 0x2c45a284
  ldr r3,[sp,#0x2a0]
  strh r5,[r1,#0x18]
  ldmia r5!,{r2,r4}
  strh r0,[r6,#0xe]
  add r7,sp,#0x3a8
  add r6,sp,#0x3b4
  movs r2,#0xf9
  bx r11
