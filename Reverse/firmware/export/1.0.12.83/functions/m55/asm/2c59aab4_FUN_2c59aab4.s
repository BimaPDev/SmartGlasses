; FUN_2c59aab4 @ 0x2c59aab4 size=22
  push {r4,lr}
  ldr r2,[0x2c59aacc]
  mov r4,r0
  movs r3,#0x0
  adds r0,#0x30
  str r2,[r4,#0x0]
  str r3,[r4,#0x64]
  bl 0x2c59ba24
  mov r0,r4
  pop {r4,pc}
