; FUN_140c55ec @ 0x140c55ec size=14
  ldr r3,[r1,#0x0]
  push {r4,lr}
  mov r4,r0
  ldr r3,[r3,#0x1c]
  blx r3
  mov r0,r4
  pop {r4,pc}
