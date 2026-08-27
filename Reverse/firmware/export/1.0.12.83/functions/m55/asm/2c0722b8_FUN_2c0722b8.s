; FUN_2c0722b8 @ 0x2c0722b8 size=34
  push {r0,r7,lr}
  ldrb r6,[r7,#0x8]
  movs r2,#0x0
  b 0x2c0722f4
  subs r6,#0x0
  asrs r1,r6,#0x14
  asrs r4,r0,#0x18
  cmp r6,#0xe0
  sbcs r1,r0
  asrs r5,r0,#0x8
  lsrs r0,r1
  str r3,[r0,#0x24]
  strh r6,[r1,r1]
  asrs r0,r4,#0x18
  b 0x2c072346
  mov r6,r7
  lsls r6,r4,#0x8
