; FUN_1006efcc @ 0x1006efcc size=20
  movs r3,#0x0
  mov r0,r3
  ldr r1,[0x1006efe0]
  ldr r2,[r3,r1]
  adds r3,#0x4
  cmp.w r3,#0x4000
  add r0,r2
  bne 0x1006efd2
  bx lr
