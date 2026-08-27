; FUN_2c0a77d0 @ 0x2c0a77d0 size=24
  push {r0,r2,r4,r6,lr}
  ldrsb r6,[r3,r0]
  mrc2 p3,0x6,r1,cr8,cr1,0x4
  adds r7,r1,r4
  ldr r6,[0x2c0a7b5c]
  b 0x2c0a7ae2
  cmp r3,#0x65
  bkpt 0xee
  adr r4,[0x2c0a7d50]
  movs r6,#0xc
  udf #0xe0
