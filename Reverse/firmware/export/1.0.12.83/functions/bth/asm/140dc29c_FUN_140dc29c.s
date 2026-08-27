; FUN_140dc29c @ 0x140dc29c size=28
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r5,[0x140dc2b8]
  mov r4,r0
  mov r0,r1
  str r3,[r5,#0x0]
  bl 0x140e45b0
  adds r3,r0,#0x1
  bne 0x140dc2b6
  ldr r3,[r5,#0x0]
  cbz r3,0x140dc2b6
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
