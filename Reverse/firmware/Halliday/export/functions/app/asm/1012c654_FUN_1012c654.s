; FUN_1012c654 @ 0x1012c654 size=16
  push {r3,lr}
  bl 0x1008bbb4
  ldr r3,[r0,#0x0]
  ldrb r0,[r3,#0x1c]
  ubfx r0,r0,#0x6,#0x1
  pop {r3,pc}
