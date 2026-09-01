; FUN_10060090 @ 0x10060090 size=20
  push {r4,lr}
  movs r4,#0x0
  ldr r3,[0x100600a4]
  strb r4,[r3,#0x0]
  ldr r3,[0x100600a8]
  strh r4,[r3,#0x0]
  bl 0x10060008
  mov r0,r4
  pop {r4,pc}
