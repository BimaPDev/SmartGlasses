; FUN_140580f4 @ 0x140580f4 size=42
  push {lr}
  mov r2,r0
  ldr.w lr,[r1,#0x0]
  ldr r0,[r1,#0x8]
  ldr.w r12,[r1,#0x4]
  ldr r1,[r1,#0xc]
  str r0,[r3,#0x7c]
  str.w r1,[r3,#0x80]
  str.w lr,[r3,#0x74]
  str.w r12,[r3,#0x78]
  movs r1,#0x8
  mov r0,r3
  pop.w lr
  b.w 0x14057df0
