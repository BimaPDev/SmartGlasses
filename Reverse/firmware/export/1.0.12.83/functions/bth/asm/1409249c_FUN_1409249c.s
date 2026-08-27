; FUN_1409249c @ 0x1409249c size=34
  push {r4,lr}
  sub sp,#0x8
  str r0,[sp,#0x4]
  bl 0x140755e4
  ldr r0,[sp,#0x4]
  bl 0x14087b38
  mov r4,r0
  bl 0x1407561c
  subs r0,r4,#0x0
  it ne
  mov.ne r0,#0x1
  rsbs r0,r0
  add sp,#0x8
  pop {r4,pc}
