; FUN_140c2d54 @ 0x140c2d54 size=24
  ldr r3,[0x140c2d6c]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140d21d0
  mov r0,r4
  pop {r4,pc}
