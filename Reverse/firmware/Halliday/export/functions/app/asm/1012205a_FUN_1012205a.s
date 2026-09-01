; FUN_1012205a @ 0x1012205a size=46
  push {r0,r1,r2,lr}
  mov r0,sp
  bl 0x100690a0
  ldrd r0,r1,[sp,#0x0]
  bl 0x1011a71c
  bl 0x1013c70e
  cbnz r0,0x1012207e
  movs r0,#0x4
  movs r1,#0x0
  bl 0x101153fc
  add sp,#0xc
  pop.w pc
  mov.w r0,#0xfa0
  bl 0x1013d9c0
  b 0x10122078
