; FUN_10060e60 @ 0x10060e60 size=40
  push {r4,lr}
  movs r4,#0x1a
  movs r0,#0x2
  movs r1,#0x0
  subs r4,#0x1
  bl 0x101153fc
  ands r4,r4,#0xff
  bne 0x10060e7e
  ldr r0,[0x10060e88]
  pop.w {r4,lr}
  b.w 0x101188d0
  bl 0x10060e18
  cmp r0,#0x0
  bne 0x10060e64
  pop {r4,pc}
