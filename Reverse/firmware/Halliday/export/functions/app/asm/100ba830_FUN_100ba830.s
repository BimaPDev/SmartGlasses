; FUN_100ba830 @ 0x100ba830 size=42
  push {r0,r1,r4,lr}
  movs r4,#0x0
  movs r2,#0x1
  ldr r0,[0x100ba85c]
  add.w r1,sp,#0x7
  strb.w r4,[sp,#0x7]
  bl 0x1012d138
  cmp r0,#0x1
  bne 0x100ba856
  ldrb.w r0,[sp,#0x7]
  subs r3,r0,#0x1
  rsbs r0,r3
  adcs r0,r3
  add sp,#0x8
  pop {r4,pc}
  mov r0,r4
  b 0x100ba852
