; FUN_1011abe0 @ 0x1011abe0 size=32
  push {r3,lr}
  add.w r0,r0,#0x260
  movs r3,#0x2
  cbz r1,0x1011abf6
  mov r1,r3
  bl 0x1011aafc
  ubfx r0,r0,#0x1,#0x1
  pop {r3,pc}
  mvn r1,#0x2
  bl 0x1011ab12
  b 0x1011abf0
