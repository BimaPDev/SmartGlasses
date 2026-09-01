; FUN_1009e9f8 @ 0x1009e9f8 size=38
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x1009ea20]
  mov.w r1,#0xffffffff
  mov r0,r5
  bl 0x1011dbf4
  mov r0,r4
  bl 0x1009e688
  mov r4,r0
  mov r0,r5
  bl 0x10113e2c
  subs r0,r4,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,r4,r5,pc}
