; FUN_100a1b0c @ 0x100a1b0c size=36
  push {r4,lr}
  sub sp,#0x18
  mov r4,r0
  movs r2,#0x14
  movs r1,#0x0
  add r0,sp,#0x4
  bl 0x1011ea48
  movs r3,#0x7
  add r1,sp,#0x4
  ldr r0,[0x100a1b30]
  strb.w r3,[sp,#0x6]
  str r4,[sp,#0xc]
  bl 0x1009ece8
  add sp,#0x18
  pop {r4,pc}
