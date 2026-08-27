; FUN_2c11ce10 @ 0x2c11ce10 size=20
  push {r1,r2,r3,r5,r6,r7,lr}
  b 0x2c11d3cc
  subs r7,r0,r0
  subs r6,#0xfd
  movs r2,#0x3
  ldrb r1,[r0,#0x1f]
  subs r6,#0x9b
  str r1,[r0,r5]
  asrs r4,r0,#0x18
  udf #0xd8
