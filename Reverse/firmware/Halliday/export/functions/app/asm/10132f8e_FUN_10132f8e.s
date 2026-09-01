; FUN_10132f8e @ 0x10132f8e size=46
  push {r3,r4,r5,lr}
  movs r1,#0x1
  mov r5,r0
  movw r0,#0x202d
  bl 0x100c5d4c
  mov r4,r0
  cbz r0,0x10132fb6
  mov r1,r5
  bl 0x10132eaa
  mov r1,r4
  pop.w {r3,r4,r5,lr}
  movs r2,#0x0
  movw r0,#0x202d
  b.w 0x100c5e48
  mvn r0,#0x68
  pop {r3,r4,r5,pc}
