; FUN_140d2770 @ 0x140d2770 size=36
  subs r2,#0x0
  ldr r3,[0x140d2794]
  it ne
  mov.ne r2,#0x1
  push {r4,lr}
  mov r4,r0
  str r2,[r0,#0x4]
  str r3,[r0,#0x0]
  str r1,[r0,#0x8]
  bl 0x140c02e0
  movs r1,#0x0
  str r0,[r4,#0x10]
  mov r0,r4
  bl 0x140d8e10
  mov r0,r4
  pop {r4,pc}
