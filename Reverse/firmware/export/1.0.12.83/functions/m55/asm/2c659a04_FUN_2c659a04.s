; FUN_2c659a04 @ 0x2c659a04 size=68
  push {r4,r5,r6,r7,r8,lr}
  mov r5,r0
  ldr r0,[0x2c659a48]
  bl 0x2c64cf04
  mov r4,r0
  ldr r3,[r5,#0x0]
  ldr r7,[r3,#0xc]
  ldr.w r8,[r7,r0,lsl #0x2]
  cmp.w r8,#0x0
  bne 0x2c659a40
  movs r0,#0x44
  bl 0x2c64ca5c
  mov r6,r0
  mov r1,r8
  bl 0x2c659034
  mov r1,r5
  mov r0,r6
  bl 0x2c6598e8
  mov r2,r4
  mov r1,r6
  ldr r0,[r5,#0x0]
  bl 0x2c64d090
  ldr.w r0,[r7,r4,lsl #0x2]
  pop.w {r4,r5,r6,r7,r8,pc}
