; FUN_140c7e48 @ 0x140c7e48 size=24
  ldr r3,[0x140c7e60]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140c5298
  mov r0,r4
  pop {r4,pc}
