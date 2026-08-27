; FUN_140af3fc @ 0x140af3fc size=20
  mov r3,r0
  cbz r0,0x140af40e
  ldr r2,[0x140af410]
  ldr r0,[r0,#0x0]
  str r0,[r2,#0x0]
  ldrh r1,[r3,#0x4]
  ldrb r3,[r3,#0x6]
  strh r1,[r2,#0x4]
  strb r3,[r2,#0x6]
  bx lr
