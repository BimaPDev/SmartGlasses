; FUN_140b2080 @ 0x140b2080 size=18
  push {r3,lr}
  mov r3,r1
  movw r1,#0x9406
  ldrb r0,[r3,#0x4]
  bl 0x140b1f3c
  movs r0,#0x0
  pop {r3,pc}
