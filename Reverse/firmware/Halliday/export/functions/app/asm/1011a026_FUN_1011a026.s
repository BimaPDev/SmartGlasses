; FUN_1011a026 @ 0x1011a026 size=26
  push {r3,lr}
  ldr r3,[r0,#0x8]
  cmp.w r3,#0x8000
  bcc 0x1011a03c
  bl 0x1011a00e
  subs r3,r0,#0x1
  rsbs r0,r3
  adcs r0,r3
  pop {r3,pc}
  movs r0,#0x0
  b 0x1011a03a
