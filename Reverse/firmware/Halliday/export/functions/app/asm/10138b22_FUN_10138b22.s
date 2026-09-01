; FUN_10138b22 @ 0x10138b22 size=20
  ldrb r3,[r0,#0xe]
  push {r4,lr}
  orr r3,r3,#0x40
  mov r4,r0
  strb r3,[r0,#0xe]
  bl 0x1013ce56
  str r0,[r4,#0x10]
  pop {r4,pc}
