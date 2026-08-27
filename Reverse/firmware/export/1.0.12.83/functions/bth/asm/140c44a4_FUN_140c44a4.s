; FUN_140c44a4 @ 0x140c44a4 size=26
  push {r4,lr}
  mov r4,r0
  mov r0,r1
  mov r1,r2
  mov r2,r3
  mov.w r3,#0x0
  add r1,r0
  bl 0x140c4480
  str r0,[r4,#0x0]
  mov r0,r4
  pop {r4,pc}
