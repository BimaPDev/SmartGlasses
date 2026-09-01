; FUN_10127848 @ 0x10127848 size=24
  push {r4,r5,r6}
  ldr r6,[r1,#0x4]
  cbz r6,0x1012785c
  ldrb r4,[r1,#0x10]
  cmp r4,#0x2
  bls 0x1012785c
  ldr r4,[r0,#0x24]
  mov r12,r4
  pop {r4,r5,r6}
  bx r12
  pop {r4,r5,r6}
  bx lr
