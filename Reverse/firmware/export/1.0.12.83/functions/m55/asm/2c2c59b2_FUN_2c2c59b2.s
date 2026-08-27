; FUN_2c2c59b2 @ 0x2c2c59b2 size=62
  push {r1,r2,r3,r4,r5,r6,r7,lr}
  movs r0,r0
  cmp r1,#0x0
  rsbs r0,pc,r0, lsl #0x1
  cdp2 p0,0x8,cr0,cr13,cr5,0x6
  ldr r7,[0x2c2c59c4]
  ldrh r2,[r7,#0xe]
  strb r7,[r5,#0x7]
  ldmia r1,{r0,r1,r2,r3,r4,r6,r7}
  smull r1,pc,sp,r0
  lsls r2,r4,#0x3
  ldmia r7!,{}
  str r7,[r1,r3]
  lsrs r0,r0,#0x4
  lsrs r1,r7,#0x3
  lsls r5,r6,#0x3
  lsls r0,r0,#0x4
  adr r0,[0x2c2c5dd8]
  movs r0,r0
  add.w r0,sp,#0xcf
  movs r0,r0
  stc2 p0,cr0,[r12,#-0x250]
  ldrh r0,[r0,#0x38]
  orrs r0,lr,#0x0
  add r7,sp,#0x0
