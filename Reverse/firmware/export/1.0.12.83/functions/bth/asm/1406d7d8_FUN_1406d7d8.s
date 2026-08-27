; FUN_1406d7d8 @ 0x1406d7d8 size=30
  push {r3,r4,r5,lr}
  ldr r3,[r0,#0x4]
  cbz r3,0x1406d7f4
  mov r4,r0
  adds r5,r0,#0x4
  mov r0,r5
  bl 0x14073a58
  ldr r3,[r0,#0x4]
  ldr r3,[r3,#0x4]
  blx r3
  ldr r3,[r4,#0x4]
  cmp r3,#0x0
  bne 0x1406d7e2
  pop {r3,r4,r5,pc}
