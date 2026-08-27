; FUN_140c52e8 @ 0x140c52e8 size=24
  ldr r3,[0x140c5300]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140d86fc
  mov r0,r4
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
