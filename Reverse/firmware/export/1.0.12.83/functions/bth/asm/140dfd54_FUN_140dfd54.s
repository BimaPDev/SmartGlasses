; FUN_140dfd54 @ 0x140dfd54 size=30
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r5,[0x140dfd74]
  mov r4,r0
  mov r0,r1
  mov r1,r2
  str r3,[r5,#0x0]
  bl 0x140e4550
  adds r3,r0,#0x1
  bne 0x140dfd70
  ldr r3,[r5,#0x0]
  cbz r3,0x140dfd70
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
