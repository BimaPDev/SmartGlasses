; FUN_100d5dac @ 0x100d5dac size=32
  ldr r2,[0x100d5dcc]
  mov r3,r0
  ldr r2,[r2,#0x0]
  ldr r0,[r2,#0x0]
  cbnz r0,0x100d5db8
  bx lr
  ldrb.w r2,[r0,#0x38]
  ubfx r2,r2,#0x4,#0x3
  cmp r2,r3
  bne 0x100d5dc8
  ldr r0,[r0,#0xc]
  bx lr
  ldr r0,[r0,#0x0]
  b 0x100d5db4
