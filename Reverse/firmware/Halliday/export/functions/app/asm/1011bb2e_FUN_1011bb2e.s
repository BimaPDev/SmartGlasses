; FUN_1011bb2e @ 0x1011bb2e size=20
  push {r3,lr}
  bl 0x1005dc94
  cbz r0,0x1011bb3e
  ldrb r0,[r0,#0xa]
  and r0,r0,#0xf
  pop {r3,pc}
  movs r0,#0xff
  b 0x1011bb3c
