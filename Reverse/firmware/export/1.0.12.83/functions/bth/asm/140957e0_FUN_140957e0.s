; FUN_140957e0 @ 0x140957e0 size=34
  push {lr}
  sub sp,#0xc
  str r0,[sp,#0x4]
  bl 0x140755e4
  movs r2,#0x0
  ldr r0,[sp,#0x4]
  mov r1,r2
  bl 0x14087274
  str r0,[sp,#0x4]
  bl 0x1407561c
  ldr r0,[sp,#0x4]
  add sp,#0xc
  pop.w pc
