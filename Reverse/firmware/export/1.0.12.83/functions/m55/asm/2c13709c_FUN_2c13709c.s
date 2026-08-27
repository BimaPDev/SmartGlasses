; FUN_2c13709c @ 0x2c13709c size=96
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  movs r3,#0xa
  movs r4,#0x0
  ldr r5,[0x2c1370fc]
  ldr r7,[0x2c137100]
  ldr r6,[0x2c137104]
  lsrs r2,r3,#0x5
  cmp r3,#0x0
  add.w r2,r2,#0x80
  and r1,r3,#0x1f
  uxtb.w r8,r4
  blt 0x2c1370c6
  ldr.w r3,[r7,r2,lsl #0x2]
  lsrs r3,r1
  lsls r3,r3,#0x1f
  bmi 0x2c1370da
  adds r4,#0x1
  cmp r4,#0x5
  add.w r5,r5,#0xc
  beq 0x2c1370d6
  ldrsb.w r3,[r5,#-0xc]
  b 0x2c1370aa
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
  ldr.w r0,[r5,#-0x16]
  ldr.w r9,[r6,r4,lsl #0x2]
  ldr.w r10,[r0,#0x34]
  bl 0x2c13705c
  uxth.w r1,r10
  mov r2,r0
  cmp.w r9,#0x0
  beq 0x2c1370c6
  mov r0,r8
  blx r9
  b 0x2c1370c6
