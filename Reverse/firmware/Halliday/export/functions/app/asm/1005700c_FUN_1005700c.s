; FUN_1005700c @ 0x1005700c size=20
  movs r3,#0x1
  ldr r2,[0x10057020]
  lsls r3,r0
  ldrh.w r1,[r2,#0x38c]
  orrs r3,r1
  uxth r3,r3
  strh.w r3,[r2,#0x38c]
  bx lr
