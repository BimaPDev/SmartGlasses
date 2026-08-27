; FUN_14001474 @ 0x14001474 size=38
  push {r4,lr}
  mov r4,r0
  sub sp,#0x8
  str r1,[sp,#0x4]
  bl 0x1400175c
  ldr r1,[sp,#0x4]
  mov r0,r4
  bl 0x140019f4
  mov r0,r4
  bl 0x1400175c
  mov r0,r4
  bl 0x1400177c
  movs r0,#0x0
  add sp,#0x8
  pop {r4,pc}
