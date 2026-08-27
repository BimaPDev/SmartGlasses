; FUN_1406bfb4 @ 0x1406bfb4 size=28
  push {r4,r5,lr}
  mov r5,r3
  sub sp,#0xc
  mov r4,r2
  movs r1,#0x1d
  movs r2,#0x1c
  ldr r3,[0x1406bfd0]
  str r5,[sp,#0x0]
  bl 0x1406cd54
  ldr r3,[0x1406bfd4]
  str r3,[r4,#0x0]
  add sp,#0xc
  pop {r4,r5,pc}
