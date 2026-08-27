; FUN_140d8780 @ 0x140d8780 size=28
  ldr r3,[0x140d879c]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140d86fc
  ldr r3,[0x140d87a0]
  mov r0,r4
  str r3,[r4,#0x0]
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
