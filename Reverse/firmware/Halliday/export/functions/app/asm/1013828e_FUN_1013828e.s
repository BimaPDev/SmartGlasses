; FUN_1013828e @ 0x1013828e size=32
  ldr r0,[r0,#0x54]
  cbz r0,0x101382ac
  subs r0,#0x8
  cbnz r0,0x10138298
  bx lr
  ldrh.w r3,[r0,#0x50]
  cmp r3,r1
  beq 0x101382ac
  adds.w r3,r0,#0x8
  beq 0x101382aa
  ldr r0,[r0,#0x8]
  b 0x10138290
  mov r0,r3
  bx lr
