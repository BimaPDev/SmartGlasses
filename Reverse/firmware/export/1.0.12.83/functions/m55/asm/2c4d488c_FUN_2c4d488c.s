; FUN_2c4d488c @ 0x2c4d488c size=20
  ldrb.w r3,[r0,#0x21]
  cmp r3,r1
  bls 0x2c4d489c
  add r0,r1
  ldrb.w r0,[r0,#0x22]
  bx lr
  movs r0,#0x0
  bx lr
