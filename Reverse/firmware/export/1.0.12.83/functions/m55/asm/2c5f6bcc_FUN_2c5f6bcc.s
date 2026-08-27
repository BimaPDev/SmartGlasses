; FUN_2c5f6bcc @ 0x2c5f6bcc size=20
  bic.w r1,r1,r1, asr #0x1f
  ldr r3,[r0,#0xc]
  cmp r3,r1
  ble 0x2c5f6bde
  ldr r3,[r0,#0x4]
  movs r2,#0x0
  str r1,[r0,#0xc]
  strb r2,[r3,r1]
  bx lr
