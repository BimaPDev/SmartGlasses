; FUN_100feb74 @ 0x100feb74 size=24
  push {r3,r4,r5,lr}
  mov r4,r0
  movs r5,#0x0
  ldr r0,[r0,#0x24]
  str r5,[r4,#0x1c]
  cbz r0,0x100feb8a
  ldr r1,[r4,#0x20]
  cbz r1,0x100feb8a
  bl 0x100fb5cc
  str r5,[r4,#0x20]
  pop {r3,r4,r5,pc}
