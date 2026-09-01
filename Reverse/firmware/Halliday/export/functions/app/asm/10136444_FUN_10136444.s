; FUN_10136444 @ 0x10136444 size=30
  push {r3,r4,r5,lr}
  bl 0x10115464
  mov r5,r0
  bl 0x1013cd52
  subs r4,r0,#0x0
  blt 0x1013645e
  mov.w r1,#0xffffffff
  mov r0,r5
  bl 0x10115194
  mov r0,r4
  pop {r3,r4,r5,pc}
