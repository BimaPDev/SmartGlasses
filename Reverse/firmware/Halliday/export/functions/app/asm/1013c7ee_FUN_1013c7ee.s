; FUN_1013c7ee @ 0x1013c7ee size=36
  push {r4,lr}
  mov r3,r1
  mov r4,r0
  cbnz r1,0x1013c800
  str r1,[r0,#0x4]
  pop.w {r4,lr}
  b.w 0x10113b60
  ldr r1,[r0,#0xc]
  cbz r1,0x1013c80e
  ldr r2,[r0,#0x4]
  cbz r2,0x1013c80e
  mov r0,r3
  bl 0x1011ea40
  mov r0,r4
  b 0x1013c7f8
