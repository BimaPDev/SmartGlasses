; FUN_10114a14 @ 0x10114a14 size=32
  cbnz r1,0x10114a2a
  mrs r0,ipsr
  cbnz r0,0x10114a2a
  ldr r3,[0x10114a34]
  ldr r2,[r3,#0x1c]
  ldr r3,[r3,#0x8]
  cmp r2,r3
  beq 0x10114a2a
  b.w 0x1013cbc2
  msr basepri,r1
  isb #0xf
  bx lr
