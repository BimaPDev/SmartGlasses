; FUN_140b4d50 @ 0x140b4d50 size=22
  cbz r0,0x140b4d5c
  ldr r0,[r0,#0x8]
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
  push {r3,lr}
  ldr r1,[0x140b4d68]
  ldr r0,[0x140b4d6c]
  bl 0x1402b0f8
