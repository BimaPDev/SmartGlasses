; FUN_140b70a0 @ 0x140b70a0 size=20
  cbz r0,0x140b70b2
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  bl 0x140b9528
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
  bx lr
