; FUN_101277ee @ 0x101277ee size=36
  sub.w r3,r0,#0x30
  uxtb r3,r3
  cmp r3,#0x9
  bls 0x1012780e
  cmp r0,#0x60
  itt hi
  sub.hi r0,#0x20
  uxtb.hi r0,r0
  sub.w r3,r0,#0x41
  cmp r3,#0x5
  itee hi
  mov.hi r3,#0x0
  sub.ls r0,#0x37
  uxtb.ls r3,r0
  mov r0,r3
  bx lr
