; FUN_140b4d88 @ 0x140b4d88 size=22
  push {r3,lr}
  cbz r0,0x140b4d96
  ldr r3,[r0,#0x8]
  cbz r3,0x140b4d96
  ldr r3,[r0,#0x0]
  ldr r0,[r3,#0x4]
  pop {r3,pc}
  ldr r1,[0x140b4da0]
  ldr r0,[0x140b4da4]
  bl 0x1402b0f8
