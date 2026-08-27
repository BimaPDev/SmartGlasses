; FUN_2c6650c4 @ 0x2c6650c4 size=42
  push {r4,r5,r6,r7,r8,lr}
  mov r7,r0
  mov r4,r1
  mov r5,r2
  mov r6,r3
  bl 0x2c664ee6
  cbnz r0,0x2c6650ea
  ldr r0,[r7,#0x8]
  mov r2,r5
  mov r1,r4
  ldr r3,[r0,#0x0]
  ldr r7,[r3,#0x18]
  mov r3,r6
  mov r12,r7
  pop.w {r4,r5,r6,r7,r8,lr}
  bx r12
  pop.w {r4,r5,r6,r7,r8,pc}
