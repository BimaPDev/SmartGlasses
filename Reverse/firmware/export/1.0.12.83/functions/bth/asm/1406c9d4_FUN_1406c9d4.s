; FUN_1406c9d4 @ 0x1406c9d4 size=36
  push {r4,r5,lr}
  mov r4,r3
  sub sp,#0xc
  mov r5,r2
  movs r1,#0x2d
  movs r2,#0x3c
  ldr r3,[0x1406c9f8]
  str r4,[sp,#0x0]
  bl 0x1406cd54
  cbnz r0,0x1406c9f0
  ldr r3,[r4,#0x0]
  strd r0,r0,[r3,#0x18]
  ldr r3,[0x1406c9fc]
  str r3,[r5,#0x0]
  add sp,#0xc
  pop {r4,r5,pc}
