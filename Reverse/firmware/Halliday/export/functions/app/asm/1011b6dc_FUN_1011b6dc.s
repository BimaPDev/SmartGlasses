; FUN_1011b6dc @ 0x1011b6dc size=24
  movs r3,#0x0
  bic r1,r1,#0x3
  add r1,r0
  cmp r0,r1
  bne 0x1011b6ec
  mov r0,r3
  bx lr
  ldr.w r2,[r0],#0x4
  add r3,r2
  b 0x1011b6e4
