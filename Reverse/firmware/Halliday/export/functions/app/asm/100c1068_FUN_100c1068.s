; FUN_100c1068 @ 0x100c1068 size=44
  push {r4,lr}
  sub sp,#0x18
  movs r2,#0x14
  mov r4,r0
  movs r1,#0x0
  add r0,sp,#0x4
  bl 0x1011ea48
  movs r3,#0xcb
  eor r4,r4,#0x1
  add r1,sp,#0x4
  ldr r0,[0x100c1094]
  strb.w r3,[sp,#0x6]
  strb.w r4,[sp,#0x7]
  bl 0x1009ece8
  movs r0,#0x0
  add sp,#0x18
  pop {r4,pc}
