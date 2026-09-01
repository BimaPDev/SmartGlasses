; FUN_100a6128 @ 0x100a6128 size=22
  cmp r0,#0x10
  ittet eq
  mov.eq r0,#0x0
  ldr.eq r3,[0x100a6140]
  mvn.ne r0,#0x15
  str.eq r0,[r3,#0x0]
  itt eq
  ldr.eq r3,[0x100a6144]
  str.eq r0,[r3,#0x0]
  bx lr
