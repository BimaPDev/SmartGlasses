; FUN_100eec68 @ 0x100eec68 size=32
  ldr r3,[0x100eec88]
  ldr r3,[r3,#0x0]
  ldrb r2,[r3,#0x2]
  ldrsb.w r3,[r3,#0x2]
  cmp r0,#0x0
  blt 0x100eec7c
  cmp r0,r2
  bge 0x100eec82
  bx lr
  add r0,r3
  sxtb r0,r0
  b 0x100eec72
  subs r0,r0,r3
  sxtb r0,r0
  b 0x100eec76
