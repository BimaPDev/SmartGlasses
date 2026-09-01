; FUN_100d456c @ 0x100d456c size=22
  ldr r2,[0x100d4584]
  mov r3,r0
  ldr r2,[r2,#0x0]
  ldr r0,[r2,#0x0]
  cbnz r0,0x100d4578
  bx lr
  ldr r2,[r0,#0xc]
  cmp r2,r3
  beq 0x100d4576
  ldr r0,[r0,#0x0]
  b 0x100d4574
