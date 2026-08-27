; FUN_1400d188 @ 0x1400d188 size=28
  mov r12,r1
  push {r3,lr}
  mov lr,r0
  mov r3,r2
  mov r1,lr
  mov r2,r12
  ldr r0,[0x1400d19c]
  bl 0x14015b18
  nop
  add r1,sp,#0x3a0
  movs r0,#0x50
  ldrh r0,[r0,#0x0]
  bx lr
