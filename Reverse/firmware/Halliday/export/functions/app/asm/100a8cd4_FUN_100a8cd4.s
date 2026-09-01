; FUN_100a8cd4 @ 0x100a8cd4 size=22
  push {r3,lr}
  cbnz r0,0x100a8ce6
  movw r1,#0x375
  ldr r3,[0x100a8cec]
  ldr r2,[0x100a8cf0]
  ldr r0,[0x100a8cf4]
  bl 0x10117c88
  ldrb r0,[r0,#0x6]
  pop {r3,pc}
