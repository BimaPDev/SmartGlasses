; FUN_10138b3a @ 0x10138b3a size=26
  push {r0,r1,r4,lr}
  mov r4,r0
  str r1,[sp,#0x4]
  bl 0x1013662e
  cbz r0,0x10138b50
  mov r0,r4
  ldr r1,[sp,#0x4]
  bl 0x100d62e4
  movs r0,#0x1
  add sp,#0x8
  pop {r4,pc}
