; FUN_1011ddd4 @ 0x1011ddd4 size=22
  push {r4,r5}
  ldr r4,[r0,#0xc]
  ldr r1,[r0,#0x4]
  ldr r3,[r4,#0x8]
  mov r0,r4
  ldr r5,[r3,#0x10]
  movs r2,#0x1
  mov r12,r5
  pop {r4,r5}
  movs r3,#0x0
  bx r12
