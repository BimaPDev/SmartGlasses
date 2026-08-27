; FUN_140c5270 @ 0x140c5270 size=16
  ldr r3,[0x140c5280]
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x0]
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
