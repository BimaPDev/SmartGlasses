; FUN_1012b33a @ 0x1012b33a size=18
  push {r4,lr}
  mov r4,r0
  bl 0x1012a75c
  ldr r3,[r4,#0x0]
  mvns r3,r3
  add r3,r0
  str r3,[r4,#0x4]
  pop {r4,pc}
