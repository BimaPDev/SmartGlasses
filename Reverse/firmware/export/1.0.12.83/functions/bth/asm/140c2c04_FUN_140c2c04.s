; FUN_140c2c04 @ 0x140c2c04 size=24
  ldr r3,[0x140c2c1c]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0xc
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140cbe60
  mov r0,r4
  pop {r4,pc}
