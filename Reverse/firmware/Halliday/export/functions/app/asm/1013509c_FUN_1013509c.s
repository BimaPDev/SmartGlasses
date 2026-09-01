; FUN_1013509c @ 0x1013509c size=28
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x100cf5a4
  cbz r0,0x101350b6
  mov r1,r5
  add.w r0,r4,#0xe0
  pop.w {r3,r4,r5,lr}
  b.w 0x100c1c20
  pop {r3,r4,r5,pc}
