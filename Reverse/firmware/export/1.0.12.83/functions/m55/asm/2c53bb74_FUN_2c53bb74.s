; FUN_2c53bb74 @ 0x2c53bb74 size=38
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr r0,[r0,#0x54]
  cbz r0,0x2c53bb80
  bl 0x2c6043d8
  movs r5,#0x0
  movs r3,#0x3
  mov r0,r4
  str r3,[r4,#0x64]
  strb.w r5,[r4,#0x68]
  bl 0x2c53bb18
  strd r5,r5,[r4,#0x54]
  strd r5,r5,[r4,#0x5c]
  pop {r3,r4,r5,pc}
