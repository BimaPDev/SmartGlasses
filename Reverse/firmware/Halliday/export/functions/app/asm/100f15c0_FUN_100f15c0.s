; FUN_100f15c0 @ 0x100f15c0 size=36
  ldr r3,[0x100f15e4]
  b 0x100f15cc
  ldr r2,[r3,#0x4]
  ldrh r2,[r2,#0xc]
  cmp r2,r0
  beq 0x100f15d6
  ldr r3,[r3,#0x0]
  cmp r3,#0x0
  bne 0x100f15c4
  mov r0,r3
  bx lr
  ldrh r3,[r3,#0x1a]
  and r3,r3,#0xf0
  subs r0,r3,#0x0
  it ne
  mov.ne r0,#0x1
  bx lr
