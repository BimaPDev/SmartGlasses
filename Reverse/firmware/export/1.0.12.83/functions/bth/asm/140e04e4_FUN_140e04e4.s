; FUN_140e04e4 @ 0x140e04e4 size=28
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r5,[0x140e0500]
  mov r4,r0
  mov r0,r1
  str r3,[r5,#0x0]
  bl 0x140e4570
  adds r3,r0,#0x1
  bne 0x140e04fe
  ldr r3,[r5,#0x0]
  cbz r3,0x140e04fe
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
