; FUN_10136b1a @ 0x10136b1a size=28
  push {r3,r4,r5,lr}
  bl 0x10136444
  mov r5,r0
  bl 0x101365be
  mov r4,r0
  mov r0,r5
  bl 0x10136462
  subs r0,r4,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r3,r4,r5,pc}
