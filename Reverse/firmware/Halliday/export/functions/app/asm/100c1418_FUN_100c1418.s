; FUN_100c1418 @ 0x100c1418 size=42
  push {r3,lr}
  ldr r0,[0x100c1444]
  bl 0x1013cb84
  ldr r2,[0x100c1448]
  ldr r3,[0x100c144c]
  ldr r0,[0x100c1450]
  subs r3,r3,r2
  lsls r3,r3,#0x5
  and r3,r3,#0xff00
  orrs r0,r3
  ldr r2,[0x100c1454]
  ldr r1,[0x100c1458]
  bl 0x100a5b78
  pop.w {r3,lr}
  ldr r0,[0x100c145c]
  b.w 0x1009e7a0
