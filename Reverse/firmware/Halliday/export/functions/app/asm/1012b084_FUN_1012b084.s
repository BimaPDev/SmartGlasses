; FUN_1012b084 @ 0x1012b084 size=26
  cbz r0,0x1012b09a
  movs r2,#0x0
  ldr r3,[r0,#0x4]
  cbnz r3,0x1012b090
  mov r0,r2
  bx lr
  ldr r1,[r0,#0x0]
  adds r2,#0x1
  add r3,r1
  ldr r3,[r3,#0x4]
  b 0x1012b08a
  mov r2,r0
  b 0x1012b08c
