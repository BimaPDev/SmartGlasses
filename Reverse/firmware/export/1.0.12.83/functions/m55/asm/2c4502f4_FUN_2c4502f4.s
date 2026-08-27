; FUN_2c4502f4 @ 0x2c4502f4 size=30
  push {r1,r2,lr}
  ldr r2,[0x2c45044c]
  ldmia r7!,{r0,r3,r4,r6}
  b 0x2c4509fc
  ldr r2,[0x2c522800]
  subs r4,#0x14
  mov r12,r2
  subs r4,#0x14
  ldr r2,[0x2c522908]
  subs r4,#0x14
  ldr r0,[r0,#0xc]
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
