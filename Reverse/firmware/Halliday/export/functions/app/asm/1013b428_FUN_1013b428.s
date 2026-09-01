; FUN_1013b428 @ 0x1013b428 size=24
  push {r0,r1,r4,lr}
  mov r4,r1
  str r0,[sp,#0x0]
  mov r1,sp
  movs r0,#0xa
  bl 0x10062a28
  cbnz r0,0x1013b43c
  ldr r3,[sp,#0x4]
  str r3,[r4,#0x0]
  add sp,#0x8
  pop {r4,pc}
