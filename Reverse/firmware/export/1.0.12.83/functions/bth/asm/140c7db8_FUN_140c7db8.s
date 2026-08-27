; FUN_140c7db8 @ 0x140c7db8 size=24
  ldr r3,[0x140c7dd0]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x10
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140c9240
  mov r0,r4
  pop {r4,pc}
