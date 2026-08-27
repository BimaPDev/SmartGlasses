; FUN_2c65e908 @ 0x2c65e908 size=62
  push {r3,lr}
  ldr r3,[r1,#0x0]
  cmp.w r3,#0x40000000
  bcc 0x2c65e918
  ldr r0,[0x2c65e948]
  bl 0x2c658680
  cmp r3,r2
  bls 0x2c65e934
  cmp.w r3,r2, lsl #0x1
  lsl.w r0,r2,#0x1
  bcs 0x2c65e934
  cmp.w r0,#0x40000000
  itet cs
  mvn.cs r3,#0xc0000000
  str.cc r0,[r1,#0x0]
  str.cs r3,[r1,#0x0]
  ldr r0,[r1,#0x0]
  adds r0,#0x1
  bpl 0x2c65e93e
  bl 0x2c658668
  pop.w {r3,lr}
  b.w 0x2c64ca5c
