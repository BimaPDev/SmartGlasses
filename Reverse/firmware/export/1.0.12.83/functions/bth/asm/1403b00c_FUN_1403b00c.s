; FUN_1403b00c @ 0x1403b00c size=32
  subs r2,r0,#0x0
  ble 0x1403b01c
  cmp r2,#0x10
  beq 0x1403b046
  cmp r2,#0xf
  bne 0x1403b028
  ldr r0,[0x1403b04c]
  bx lr
  ldr r0,[0x1403b050]
  add.w r2,r2,r2, lsl #0x2
  add.w r0,r0,r2, lsl #0x3
  bx lr
  ldr r0,[0x1403b060]
  bx lr
