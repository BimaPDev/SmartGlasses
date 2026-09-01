; FUN_10093250 @ 0x10093250 size=36
  push {r3,lr}
  movs r1,#0x44
  ldr r0,[0x10093274]
  bl 0x1012b008
  movs r2,#0x0
  movs r1,#0x1
  ldr r0,[0x10093278]
  bl 0x10094a1c
  ldr r3,[0x1009327c]
  str r0,[r3,#0x0]
  bl 0x100930a8
  movs r2,#0x0
  ldr r3,[0x10093280]
  strb r2,[r3,#0x0]
  pop {r3,pc}
