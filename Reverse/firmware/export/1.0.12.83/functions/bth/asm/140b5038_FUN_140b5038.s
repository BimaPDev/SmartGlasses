; FUN_140b5038 @ 0x140b5038 size=16
  cbz r0,0x140b503e
  ldr r0,[r0,#0x4]
  bx lr
  push {r3,lr}
  ldr r1,[0x140b5048]
  ldr r0,[0x140b504c]
  bl 0x1402b0f8
