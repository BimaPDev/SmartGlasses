; FUN_140c4bb4 @ 0x140c4bb4 size=28
  push {r4,lr}
  mov r4,r0
  mov r0,r1
  mov r1,r2
  mov r2,r3
  mov.w r3,#0x0
  add.w r1,r0,r1, lsl #0x2
  bl 0x140c4b90
  str r0,[r4,#0x0]
  mov r0,r4
  pop {r4,pc}
