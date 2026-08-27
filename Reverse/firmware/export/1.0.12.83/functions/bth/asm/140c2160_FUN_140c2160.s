; FUN_140c2160 @ 0x140c2160 size=16
  ldr r3,[0x140c2170]
  push {r4,lr}
  mov r4,r0
  str r3,[r0,#0x0]
  bl 0x140c0288
  mov r0,r4
  pop {r4,pc}
