; FUN_2c652310 @ 0x2c652310 size=34
  push {r0,r1,r2,r4,r5,lr}
  ldr r5,[r0,#0x4]
  cmp r1,r5
  bls 0x2c652324
  mov r2,r1
  mov r3,r5
  ldr r1,[0x2c652334]
  ldr r0,[0x2c652338]
  bl 0x2c65868c
  str r3,[sp,#0x0]
  mov r3,r2
  movs r2,#0x0
  bl 0x2c65ec1c
  add sp,#0xc
  pop {r4,r5,pc}
