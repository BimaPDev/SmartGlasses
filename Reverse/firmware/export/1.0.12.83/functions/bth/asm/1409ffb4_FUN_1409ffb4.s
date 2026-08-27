; FUN_1409ffb4 @ 0x1409ffb4 size=40
  cbz r0,0x1409ffd6
  ldr r3,[0x1409ffdc]
  ldr r1,[r3,#0x0]
  cbz r1,0x1409ffd6
  ldr r3,[0x1409ffe0]
  push {r4,lr}
  mov.w r2,#0x15c
  mov r4,r0
  adds r1,#0x10
  mov r0,r3
  bl 0x140e5278
  mov r3,r0
  str r3,[r4,#0x0]
  movs r0,#0x0
  pop {r4,pc}
  mov.w r0,#0xffffffff
  bx lr
