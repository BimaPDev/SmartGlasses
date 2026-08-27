; FUN_140cc2c0 @ 0x140cc2c0 size=14
  ldr r3,[r1,#0x0]
  push {r4,lr}
  mov r4,r0
  ldr r3,[r3,#0x10]
  blx r3
  mov r0,r4
  pop {r4,pc}
