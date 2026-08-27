; FUN_1405814c @ 0x1405814c size=44
  push {lr}
  mov r2,r0
  ldr.w lr,[r1,#0x0]
  ldr r0,[r1,#0x8]
  ldr.w r12,[r1,#0x4]
  ldr r1,[r1,#0xc]
  str.w r0,[r3,#0x9c]
  str.w r1,[r3,#0xa0]
  str.w lr,[r3,#0x94]
  str.w r12,[r3,#0x98]
  movs r1,#0x9
  mov r0,r3
  pop.w lr
  b.w 0x14057df0
