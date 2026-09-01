; FUN_100b993c @ 0x100b993c size=32
  push {lr}
  sub sp,#0xc
  add r1,sp,#0x4
  movs r0,#0x0
  bl 0x100b93e4
  ldr r2,[0x100b995c]
  ldr r3,[sp,#0x4]
  ldr r0,[r2,#0x4]
  cmp r0,r3
  ite cc
  mov.cc r0,#0x0
  mov.cs r0,#0x1
  add sp,#0xc
  pop.w pc
