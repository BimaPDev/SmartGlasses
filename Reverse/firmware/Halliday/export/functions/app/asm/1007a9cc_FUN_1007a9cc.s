; FUN_1007a9cc @ 0x1007a9cc size=26
  push {r4,lr}
  ldr r4,[0x1007a9e8]
  ldrb r0,[r4,#0x10]
  bl 0x1007c5fc
  strh.w r0,[r4,#0x14e]
  ldrb r0,[r4,#0x14]
  bl 0x1007c5fc
  strh.w r0,[r4,#0x150]
  pop {r4,pc}
