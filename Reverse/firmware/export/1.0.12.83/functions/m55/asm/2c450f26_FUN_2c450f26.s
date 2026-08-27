; FUN_2c450f26 @ 0x2c450f26 size=18
  lsls r0,r0,#0x1f
  push {r2,r4,r6,lr}
  bhi 0x2c450fe6
  bvc 0x2c450f00
  adds r4,#0xff
  strb r3,[r7,#0x18]
  adds r4,#0x41
  lsrs r1,r4,#0x12
  ldrb r6,[r5,#0x1]
