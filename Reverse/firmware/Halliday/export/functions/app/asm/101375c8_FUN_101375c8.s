; FUN_101375c8 @ 0x101375c8 size=18
  push {r3,lr}
  bl 0x100deb94
  cbz r0,0x101375d8
  ldrb r3,[r0,#0x0]
  bfc r3,#0x1,#0x1
  strb r3,[r0,#0x0]
  pop {r3,pc}
