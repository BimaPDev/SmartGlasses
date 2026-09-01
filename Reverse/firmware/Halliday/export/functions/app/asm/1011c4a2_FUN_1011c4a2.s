; FUN_1011c4a2 @ 0x1011c4a2 size=22
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  bl 0x1011a9aa
  str r0,[r4,#0x4]
  bl 0x1011aa14
  str r0,[r4,#0x8]
  movs r0,#0x0
  pop {r4,pc}
