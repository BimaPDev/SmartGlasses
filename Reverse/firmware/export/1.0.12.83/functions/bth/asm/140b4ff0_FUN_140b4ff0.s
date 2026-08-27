; FUN_140b4ff0 @ 0x140b4ff0 size=16
  cbz r0,0x140b4ff6
  ldr r0,[r0,#0x0]
  bx lr
  push {r3,lr}
  ldr r1,[0x140b5000]
  ldr r0,[0x140b5004]
  bl 0x1402b0f8
