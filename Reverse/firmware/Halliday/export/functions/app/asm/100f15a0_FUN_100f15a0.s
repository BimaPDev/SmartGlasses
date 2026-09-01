; FUN_100f15a0 @ 0x100f15a0 size=26
  ldr r3,[0x100f15bc]
  b 0x100f15ac
  ldr r2,[r3,#0x4]
  ldrh r2,[r2,#0xc]
  cmp r2,r0
  beq 0x100f15b6
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  bne 0x100f15a4
  mov r0,r3
  bx lr
  ldrh r0,[r3,#0x1a]
  bx lr
