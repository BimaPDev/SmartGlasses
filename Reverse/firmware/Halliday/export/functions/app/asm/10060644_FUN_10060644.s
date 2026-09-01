; FUN_10060644 @ 0x10060644 size=24
  push {r4,lr}
  ldr r4,[0x1006065c]
  ldrsh.w r2,[r4,#0x0]
  strh r2,[r1,#0x0]
  cbz r2,0x10060656
  ldr r0,[0x10060660]
  bl 0x10119dc2
  movs r3,#0x0
  strh r3,[r4,#0x0]
  pop {r4,pc}
