; FUN_100e7474 @ 0x100e7474 size=36
  ldr r3,[0x100e7498]
  ldr r0,[0x100e749c]
  push {r4,lr}
  subs r0,r0,r3
  lsls r0,r0,#0x5
  ldr r4,[0x100e74a0]
  and r0,r0,#0xff00
  orr r0,r0,#0x5f0000
  ldrb r2,[r4,#0x0]
  ldr r1,[0x100e74a4]
  orr r0,r0,#0x31
  bl 0x100a5b78
  ldrb r0,[r4,#0x0]
  pop {r4,pc}
