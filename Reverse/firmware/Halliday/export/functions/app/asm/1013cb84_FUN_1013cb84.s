; FUN_1013cb84 @ 0x1013cb84 size=34
  push {r4,lr}
  mov r1,r0
  bl 0x1013cb60
  mov r4,r0
  mov r0,r1
  bl 0x10114878
  cbz r4,0x1013cba0
  cmp r0,#0x0
  it ne
  mvn.ne r0,#0x15
  pop {r4,pc}
  mvn r0,#0x77
  b 0x1013cb9e
