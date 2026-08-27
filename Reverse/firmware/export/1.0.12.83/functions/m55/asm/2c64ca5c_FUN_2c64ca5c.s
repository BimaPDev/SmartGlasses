; FUN_2c64ca5c @ 0x2c64ca5c size=34
  cmp r0,#0x1
  it cc
  mov.cc r0,#0x1
  push {r4,lr}
  mov r4,r0
  mov r0,r4
  bl 0x2c669578
  cbnz r0,0x2c64ca7c
  bl 0x2c664fe4
  cbnz r0,0x2c64ca78
  bl 0x2c668474
  blx r0
  b 0x2c64ca66
  pop {r4,pc}
