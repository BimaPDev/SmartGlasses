; FUN_140c4d04 @ 0x140c4d04 size=36
  subs r1,#0x0
  ldr r3,[0x140c4d28]
  it ne
  mov.ne r1,#0x1
  push {r4,lr}
  str r1,[r0,#0x4]
  mov r4,r0
  str r3,[r0,#0x0]
  bl 0x140c02cc
  movs r3,#0x0
  str r0,[r4,#0x8]
  mov r0,r4
  strb r3,[r4,#0xc]
  bl 0x140c5038
  mov r0,r4
  pop {r4,pc}
