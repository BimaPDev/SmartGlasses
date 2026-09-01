; FUN_10124532 @ 0x10124532 size=40
  push {r3,r4,r5,lr}
  ldrb r3,[r0,#0x1c]
  mov r4,r0
  ubfx r5,r3,#0x3,#0x1
  orr r3,r3,#0x8
  strb r3,[r0,#0x1c]
  lsls r3,r3,#0x1d
  bmi 0x10124554
  bl 0x10087314
  ldrb r3,[r4,#0x1c]
  bfi r3,r5,#0x3,#0x1
  strb r3,[r4,#0x1c]
  pop {r3,r4,r5,pc}
  bl 0x10087344
  b 0x1012454a
