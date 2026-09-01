; FUN_1009df28 @ 0x1009df28 size=34
  push {r4,lr}
  mov r4,r0
  sub sp,#0x18
  movs r2,#0x14
  movs r1,#0x0
  add r0,sp,#0x4
  bl 0x1011ea48
  movs r2,#0x14
  add r1,sp,#0x4
  ldr r0,[0x1009df4c]
  strh.w r4,[sp,#0x14]
  bl 0x1012d2f0
  add sp,#0x18
  pop {r4,pc}
