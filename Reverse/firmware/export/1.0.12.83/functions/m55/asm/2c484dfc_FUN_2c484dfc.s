; FUN_2c484dfc @ 0x2c484dfc size=24
  cmp r2,#0x0
  ble 0x2c484e12
  subs r0,#0x1
  add r1,r2
  add r2,r0
  ldrb.w r3,[r0,#0x1]!
  cmp r0,r2
  strb.w r3,[r1,#-0x1]!
  bne 0x2c484e06
  bx lr
