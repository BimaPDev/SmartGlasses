; FUN_140b5008 @ 0x140b5008 size=16
  cbz r0,0x140b500e
  movs r0,#0x0
  bx lr
  push {r3,lr}
  ldr r1,[0x140b5018]
  ldr r0,[0x140b501c]
  bl 0x1402b0f8
