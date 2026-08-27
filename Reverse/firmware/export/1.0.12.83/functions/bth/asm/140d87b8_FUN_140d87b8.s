; FUN_140d87b8 @ 0x140d87b8 size=26
  subs r1,#0x0
  ldr r3,[0x140d87d4]
  it ne
  mov.ne r1,#0x1
  push {r4,lr}
  mov r4,r0
  str r1,[r0,#0x4]
  str r3,[r0,#0x0]
  bl 0x140c02cc
  str r0,[r4,#0x8]
  mov r0,r4
  pop {r4,pc}
