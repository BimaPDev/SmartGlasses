; FUN_140c9270 @ 0x140c9270 size=24
  ldr r3,[0x140c9288]
  push {r4,lr}
  mov r4,r0
  str.w r3,[r0],#0x8
  bl 0x140d86fc
  mov r0,r4
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
