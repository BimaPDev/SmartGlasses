; FUN_2c658408 @ 0x2c658408 size=40
  push {r0,r1,r2,r4,r5,lr}
  add r5,sp,#0x18
  mov r4,r0
  stm r5,{r2,r3}
  ldr r2,[sp,#0x28]
  ldr r3,[r1,#0x0]
  str r2,[sp,#0x4]
  movs r2,#0x0
  str r2,[sp,#0x0]
  ldr r5,[r3,#0x10]
  ldrd r2,r3,[sp,#0x18]
  blx r5
  mov r0,r4
  add sp,#0xc
  pop.w {r4,r5,lr}
  add sp,#0x8
  bx lr
