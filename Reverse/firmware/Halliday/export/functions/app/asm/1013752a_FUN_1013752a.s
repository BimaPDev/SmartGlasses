; FUN_1013752a @ 0x1013752a size=46
  push {r4,lr}
  mov r4,r0
  cbz r0,0x1013754c
  movs r2,#0x0
  movs r1,#0x1
  add.w r3,r0,#0xe8
  mov r0,r2
  bl 0x100de004
  mov r1,r0
  cbz r0,0x10137552
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x100ddd34
  mvn r0,#0x15
  pop {r4,pc}
  mvn r0,#0xb
  b 0x10137550
