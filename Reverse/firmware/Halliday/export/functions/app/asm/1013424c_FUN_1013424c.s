; FUN_1013424c @ 0x1013424c size=32
  ldr r0,[r0,#0x54]
  cbz r0,0x1013426a
  subs r0,#0x8
  cbnz r0,0x10134256
  bx lr
  ldrh.w r3,[r0,#0x5c]
  cmp r3,r1
  beq 0x1013426a
  adds.w r3,r0,#0x8
  beq 0x10134268
  ldr r0,[r0,#0x8]
  b 0x1013424e
  mov r0,r3
  bx lr
