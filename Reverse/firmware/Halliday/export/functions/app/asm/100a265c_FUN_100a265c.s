; FUN_100a265c @ 0x100a265c size=34
  push {r0,r1,r2,r3,r4,r5,r6,lr}
  movs r2,#0x14
  movs r1,#0x0
  add r0,sp,#0x4
  bl 0x1011ea48
  mov.w r3,#0x10a
  add r1,sp,#0x4
  ldr r0,[0x100a2680]
  strh.w r3,[sp,#0x6]
  bl 0x1009ece8
  add sp,#0x1c
  pop.w pc
