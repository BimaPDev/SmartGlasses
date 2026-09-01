; FUN_1013653e @ 0x1013653e size=30
  push {r3,lr}
  bl 0x100d456c
  cbz r0,0x10136554
  ldrb.w r3,[r0,#0x45]
  cbz r1,0x10136556
  orr r3,r3,#0x20
  strb.w r3,[r0,#0x45]
  pop {r3,pc}
  bfi r3,r1,#0x5,#0x1
  b 0x10136550
