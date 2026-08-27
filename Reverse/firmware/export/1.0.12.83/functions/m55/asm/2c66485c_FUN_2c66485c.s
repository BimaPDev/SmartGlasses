; FUN_2c66485c @ 0x2c66485c size=68
  push {r3,lr}
  ldr r3,[r1,#0x0]
  cmp.w r3,#0x10000000
  bcc 0x2c66486c
  ldr r0,[0x2c6648a0]
  bl 0x2c658680
  cmp r3,r2
  bls 0x2c664888
  cmp.w r3,r2, lsl #0x1
  lsl.w r0,r2,#0x1
  bcs 0x2c664888
  cmp.w r0,#0x10000000
  itet cs
  mvn.cs r3,#0xf0000000
  str.cc r0,[r1,#0x0]
  str.cs r3,[r1,#0x0]
  ldr r0,[r1,#0x0]
  adds r0,#0x1
  cmp.w r0,#0x20000000
  bcc 0x2c664896
  bl 0x2c658668
  lsls r0,r0,#0x2
  pop.w {r3,lr}
  b.w 0x2c64ca5c
