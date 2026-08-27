; FUN_14093008 @ 0x14093008 size=44
  push {r4,lr}
  sub sp,#0x8
  str r1,[sp,#0x4]
  bl 0x1404a1b4
  ldr r0,[r0,#0x38]
  str r0,[sp,#0x0]
  bl 0x140755e4
  ldrd r0,r1,[sp,#0x0]
  bl 0x1407c2c8
  mov r4,r0
  bl 0x1407561c
  cmp r4,#0x0
  ite ne
  mov.ne r0,#0x1
  mov.eq r0,#0x2
  add sp,#0x8
  pop {r4,pc}
