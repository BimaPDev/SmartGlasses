; FUN_1012fe38 @ 0x1012fe38 size=32
  push {r4}
  mov r4,r0
  mov r0,r1
  mov r1,r2
  mov r2,r3
  ldr r3,[r4,#0x8]
  ldr r4,[r3,#0x64]
  cbz r4,0x1012fe52
  mov r12,r4
  ldr r3,[r3,#0x68]
  pop.w r4
  bx r12
  pop.w r4
  bx lr
