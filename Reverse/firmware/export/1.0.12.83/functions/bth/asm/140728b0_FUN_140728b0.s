; FUN_140728b0 @ 0x140728b0 size=42
  push {lr}
  add.w r2,r0,#0xf
  add.w r12,r1,#0x10
  ldrb r3,[r2,#0x0]
  ldrb.w lr,[r2,#-0x1]!
  lsls r3,r3,#0x1
  sxtb r3,r3
  orr.w r3,r3,lr, lsr #0x7
  cmp r0,r2
  strb.w r3,[r12,#-0x1]!
  bne 0x140728ba
  ldrb r3,[r0,#0x0]
  lsls r3,r3,#0x1
  strb r3,[r1,#0x0]
  pop.w pc
