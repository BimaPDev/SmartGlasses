; FUN_140c7e18 @ 0x140c7e18 size=24
  ldr r3,[0x140c7e30]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140c2a2a
  mov r0,r4
  bl 0x140c5270
  mov r0,r4
  pop {r4,pc}
