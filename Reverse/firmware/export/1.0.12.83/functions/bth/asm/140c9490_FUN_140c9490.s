; FUN_140c9490 @ 0x140c9490 size=14
  ldr r3,[r1,#0x0]
  push {r4,lr}
  mov r4,r0
  ldr r3,[r3,#0x14]
  blx r3
  mov r0,r4
  pop {r4,pc}
