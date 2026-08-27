; FUN_2c63c034 @ 0x2c63c034 size=38
  push {r4,lr}
  bl 0x2c5e1174
  cbz r0,0x2c63c056
  ldr r1,[0x2c63c05c]
  mov r4,r0
  bl 0x2c66b624
  cbz r0,0x2c63c054
  ldr r1,[0x2c63c060]
  mov r0,r4
  bl 0x2c66b624
  subs r0,#0x0
  it ne
  mov.ne r0,#0x1
  pop {r4,pc}
  movs r0,#0x1
  pop {r4,pc}
