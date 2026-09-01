; FUN_1008a284 @ 0x1008a284 size=38
  push {r0,r1,r2,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  ldr r1,[0x1008a2ac]
  str r2,[sp,#0x4]
  bl 0x100932b0
  mov r0,r4
  bl 0x10125ffe
  movs r2,#0x0
  subs r1,r0,r5
  mov r0,r4
  ldr r3,[sp,#0x4]
  add sp,#0xc
  pop.w {r4,r5,lr}
  b.w 0x1012608c
