; FUN_2c664ac6 @ 0x2c664ac6 size=62
  mov r3,r0
  push {r0,r1,r2,r4,r5,r6,r7,lr}
  ldr.w r2,[r3],#0x8
  mov r4,r0
  ldr r5,[r0,#0x4]
  mov r6,r1
  cmp r2,r3
  add.w r7,r5,#0x1
  ite ne
  ldr.ne r3,[r0,#0x8]
  mov.eq r3,#0x3
  cmp r7,r3
  bls 0x2c664af2
  movs r3,#0x1
  mov r1,r5
  str r3,[sp,#0x0]
  movs r3,#0x0
  mov r2,r3
  bl 0x2c66499e
  ldr r3,[r4,#0x0]
  mov r1,r7
  mov r0,r4
  str.w r6,[r3,r5,lsl #0x2]
  bl 0x2c664850
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
