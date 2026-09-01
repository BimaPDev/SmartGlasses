; FUN_1011b0b2 @ 0x1011b0b2 size=18
  push {r4,lr}
  mov r4,r3
  ldr r3,[r0,#0x4]
  ldr r0,[r3,#0xc]
  bl 0x100545e4
  str r0,[r4,#0x0]
  movs r0,#0x0
  pop {r4,pc}
