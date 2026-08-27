; FUN_14095ab4 @ 0x14095ab4 size=34
  push {r4,lr}
  sub sp,#0x8
  str r0,[sp,#0x4]
  bl 0x140755e4
  ldr r0,[sp,#0x4]
  bl 0x14087d04
  mov r4,r0
  bl 0x1407561c
  cmp r4,#0x0
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x2
  add sp,#0x8
  pop {r4,pc}
