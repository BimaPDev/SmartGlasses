; FUN_10124564 @ 0x10124564 size=40
  push {r0,r1,r4,lr}
  str r1,[sp,#0x4]
  bl 0x1012455a
  mov r4,r0
  cbnz r0,0x10124576
  movs r0,#0x1
  add sp,#0x8
  pop {r4,pc}
  movs r1,#0x80
  bl 0x10124cd6
  cmp r0,#0x0
  bne 0x10124570
  movs r1,#0xd
  mov r0,r4
  add r2,sp,#0x4
  bl 0x10086f50
  b 0x10124572
