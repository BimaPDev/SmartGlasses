; FUN_140b5020 @ 0x140b5020 size=16
  cbz r0,0x140b5026
  ldr r0,[r0,#0x0]
  bx lr
  push {r3,lr}
  ldr r1,[0x140b5030]
  ldr r0,[0x140b5034]
  bl 0x1402b0f8
