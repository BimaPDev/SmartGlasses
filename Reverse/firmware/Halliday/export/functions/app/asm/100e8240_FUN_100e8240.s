; FUN_100e8240 @ 0x100e8240 size=24
  ldr r3,[0x100e8258]
  ldr r3,[r3,#0x0]
  cbnz r3,0x100e824a
  mov r0,r3
  bx lr
  ldr r2,[r3,#0x0]
  cmp r2,r0
  beq 0x100e8254
  ldr r3,[r3,#0x8]
  b 0x100e8244
  ldr r0,[r3,#0x4]
  bx lr
