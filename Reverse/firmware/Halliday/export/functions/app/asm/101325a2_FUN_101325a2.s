; FUN_101325a2 @ 0x101325a2 size=34
  movs r3,#0x2
  push {r0,r1,r2,r4,r5,lr}
  mov r5,r0
  str r3,[sp,#0x4]
  bl 0x10131956
  mov r4,r0
  add r1,sp,#0x4
  mov r0,r5
  bl 0x100c80a0
  mov r0,r4
  bl 0x1013197e
  movs r0,#0x0
  add sp,#0xc
  pop {r4,r5,pc}
