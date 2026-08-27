; FUN_2c5e1a40 @ 0x2c5e1a40 size=30
  ldrb r0,[r5,#0x10]
  subs r4,#0x3d
  push {lr}
  subs r4,#0x31
  stc p12,cr3,[r12],{0x16}
  blt 0x2c5e1a3c
  subs r4,#0x31
  stc p12,cr3,[r0],#0x58
  asrs r0,r1,#0x17
  subs r4,#0x32
  adr r4,[0x2c5e1b78]
  subs r4,#0x15
  pop {r7,pc}
