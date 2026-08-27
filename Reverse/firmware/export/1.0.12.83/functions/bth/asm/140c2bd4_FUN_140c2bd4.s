; FUN_140c2bd4 @ 0x140c2bd4 size=24
  ldr r3,[0x140c2bec]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x10
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140d2264
  mov r0,r4
  pop {r4,pc}
