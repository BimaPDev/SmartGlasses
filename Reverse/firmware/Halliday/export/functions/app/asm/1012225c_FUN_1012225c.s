; FUN_1012225c @ 0x1012225c size=30
  movs r3,#0x0
  push {r0,r1,r4,lr}
  mov r4,r0
  movs r1,#0x1
  add r0,sp,#0x4
  str r3,[sp,#0x4]
  bl 0x10083c54
  cbnz r0,0x10122276
  ldr r3,[sp,#0x4]
  str r3,[r4,#0x0]
  add sp,#0x8
  pop {r4,pc}
  movs r3,#0x64
  b 0x10122270
