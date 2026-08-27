; FUN_2c492f3c @ 0x2c492f3c size=24
  adds r3,r0,#0x1
  beq 0x2c492f4e
  ldr r2,[0x2c492f54]
  ldr r3,[0x2c492f58]
  cmp r0,#0x1
  it eq
  mov.eq r3,r2
  mov r0,r3
  bx lr
  ldr r3,[0x2c492f5c]
  mov r0,r3
  bx lr
