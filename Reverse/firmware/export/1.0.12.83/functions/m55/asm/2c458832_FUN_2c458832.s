; FUN_2c458832 @ 0x2c458832 size=28
  stc2 p12,cr14,[r5,#-0x19c]
  str r6,[r1,#0x78]
  ldr r7,[0x2c45875c]
  adds r0,r6,#0x6
  iteee al
  asr.al r2,r7,#0x1b
  push {r0,r1,lr}
  strb r6,[r4,#0x19]
  asrs r3,r4
  movs r0,r0
  movs r0,r0
  bkpt 0x2
  b 0x2c45835e
