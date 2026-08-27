; FUN_2c26b98c @ 0x2c26b98c size=34
  str r6,[r6,#0x6c]
  lsls r3,r4,#0x1
  ssat r0,#0x0,r10
  ldrb r0,[r0,#0x1c]
  movs r0,r0
  movs r0,r0
  beq 0x2c26b786
  movs r0,r0
  and r0,r7,#0x0
  ldr r7,[0x2c26b7b0]
  strb r4,[r7,#0x3]
  push {r0,r1,r2,r3,r4,r5,r6,r7,lr}
  ldmia r7!,{r0}
  lsls r0,r2,#0x3
  b 0x2c26b796
