; FUN_1012e028 @ 0x1012e028 size=18
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x24]
  bl 0x10064560
  ldrb r3,[r4,#0x2]
  udiv r0,r0,r3
  pop {r4,pc}
