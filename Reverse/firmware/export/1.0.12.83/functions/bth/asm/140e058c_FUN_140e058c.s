; FUN_140e058c @ 0x140e058c size=32
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r5,[0x140e05ac]
  mov r0,r1
  mov r1,r2
  movs r2,#0x0
  str r2,[r5,#0x0]
  mov r2,r3
  bl 0x140e4590
  adds r3,r0,#0x1
  bne 0x140e05aa
  ldr r3,[r5,#0x0]
  cbz r3,0x140e05aa
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
