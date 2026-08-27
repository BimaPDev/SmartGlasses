; FUN_2c656574 @ 0x2c656574 size=26
  subs r1,#0x0
  ldr r3,[0x2c656590]
  it ne
  mov.ne r1,#0x1
  push {r4,lr}
  mov r4,r0
  str r1,[r0,#0x4]
  str r3,[r0,#0x0]
  bl 0x2c64ce10
  str r0,[r4,#0x8]
  mov r0,r4
  pop {r4,pc}
