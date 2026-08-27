; FUN_1408e4e0 @ 0x1408e4e0 size=26
  cbz r0,0x1408e4ee
  push {r3,lr}
  bl 0x1408a7dc
  cbz r0,0x1408e4f2
  ldrh r0,[r0,#0x28]
  pop {r3,pc}
  movs r0,#0x1
  bx lr
  ldr r1,[0x1408e500]
  movs r0,#0x40
  bl 0x1402a64c
