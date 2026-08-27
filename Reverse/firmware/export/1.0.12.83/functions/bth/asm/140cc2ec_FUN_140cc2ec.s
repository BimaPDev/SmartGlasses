; FUN_140cc2ec @ 0x140cc2ec size=36
  subs r2,#0x0
  ldr r3,[0x140cc310]
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
  bl 0x140d8bb4
  mov r0,r4
  pop {r4,pc}
