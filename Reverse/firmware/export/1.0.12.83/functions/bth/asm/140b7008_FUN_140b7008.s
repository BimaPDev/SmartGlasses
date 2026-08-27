; FUN_140b7008 @ 0x140b7008 size=20
  cbz r0,0x140b701a
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  bl 0x140b94c4
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
  bx lr
