; FUN_1011a5a2 @ 0x1011a5a2 size=24
  mov r3,r0
  push {r4,lr}
  movs r0,#0x28
  blx r3
  mov r4,r0
  cbz r0,0x1011a5b6
  movs r2,#0x28
  movs r1,#0x0
  bl 0x1011ea48
  mov r0,r4
  pop {r4,pc}
