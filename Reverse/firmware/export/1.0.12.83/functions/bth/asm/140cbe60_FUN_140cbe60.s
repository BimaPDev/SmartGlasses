; FUN_140cbe60 @ 0x140cbe60 size=24
  ldr r3,[0x140cbe78]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140d86fc
  mov r0,r4
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
