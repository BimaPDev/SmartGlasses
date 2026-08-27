; FUN_140bff34 @ 0x140bff34 size=34
  cmp r0,#0x1
  it cc
  mov.cc r0,#0x1
  push {r4,lr}
  mov r4,r0
  mov r0,r4
  bl 0x140db6f0
  cbnz r0,0x140bff54
  bl 0x140d7f28
  cbnz r0,0x140bff50
  bl 0x140da8b8
  blx r0
  b 0x140bff3e
  pop {r4,pc}
