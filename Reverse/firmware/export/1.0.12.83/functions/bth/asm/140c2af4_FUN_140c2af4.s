; FUN_140c2af4 @ 0x140c2af4 size=24
  ldr r3,[0x140c2b0c]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x10
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140cbe30
  mov r0,r4
  pop {r4,pc}
