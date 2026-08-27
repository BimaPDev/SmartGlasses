; FUN_140c5318 @ 0x140c5318 size=24
  ldr r3,[0x140c5330]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140d86fc
  mov r0,r4
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
