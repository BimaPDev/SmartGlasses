; FUN_100d9174 @ 0x100d9174 size=40
  ldr r3,[0x100d919c]
  push {r4,lr}
  ldr r3,[r3,#0x0]
  ldrb r3,[r3,#0x0]
  lsls r2,r3,#0x1f
  bpl 0x100d919a
  ldr r3,[0x100d91a0]
  ldr r3,[r3,#0x0]
  ldrb.w r3,[r3,#0x31]
  lsls r3,r3,#0x1f
  bmi 0x100d919a
  bl 0x10136622
  mov r4,r0
  cbz r0,0x100d919a
  bl 0x1013676c
  str r0,[r4,#0x8]
  pop {r4,pc}
