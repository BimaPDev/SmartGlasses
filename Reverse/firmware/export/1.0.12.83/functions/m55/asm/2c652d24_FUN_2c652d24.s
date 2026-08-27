; FUN_2c652d24 @ 0x2c652d24 size=32
  push {r4,r5,r6,r7,lr}
  sub sp,#0x1c
  mov r5,r0
  add r4,sp,#0x10
  ldr r6,[sp,#0x3c]
  ldrb.w r7,[sp,#0x30]
  stm r4,{r2,r3}
  ldr r3,[sp,#0x34]
  mlacss r8,sp,r8,pc
  stmib sp,{r8,r9,r12,pc}^
  ldmia r4,{r0,r9,r10,sp}
