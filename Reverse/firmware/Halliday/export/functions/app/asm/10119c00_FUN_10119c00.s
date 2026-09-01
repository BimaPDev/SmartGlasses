; FUN_10119c00 @ 0x10119c00 size=30
  push {r3,r4,r5,lr}
  movs r3,#0x0
  ldr r5,[0x10119c20]
  mov r4,r0
  mov r0,r1
  mov r1,r2
  str r3,[r5,#0x0]
  bl 0x1011e9e0
  adds r3,r0,#0x1
  bne 0x10119c1c
  ldr r3,[r5,#0x0]
  cbz r3,0x10119c1c
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
