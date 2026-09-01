; FUN_100e7dc8 @ 0x100e7dc8 size=42
  push {r4,lr}
  sub sp,#0x18
  mov r4,r0
  movs r2,#0x14
  movs r1,#0x0
  add r0,sp,#0x4
  bl 0x1011ea48
  movs r3,#0x7
  add r1,sp,#0x4
  ldr r0,[0x100e7df4]
  strb.w r3,[sp,#0x6]
  str r4,[sp,#0xc]
  bl 0x1009ece8
  eor r0,r0,#0x1
  uxtb r0,r0
  add sp,#0x18
  pop {r4,pc}
