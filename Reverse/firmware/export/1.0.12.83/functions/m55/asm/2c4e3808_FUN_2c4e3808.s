; FUN_2c4e3808 @ 0x2c4e3808 size=34
  push {r4,lr}
  cbz r0,0x2c4e3828
  bl 0x2c4df9d2
  cbz r0,0x2c4e3828
  add.w r4,r0,#0x30
  mov r0,r4
  bl 0x2c4de9c0
  cbz r0,0x2c4e3828
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c4dea30
  pop {r4,pc}
