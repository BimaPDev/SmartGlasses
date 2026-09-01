; FUN_1006482c @ 0x1006482c size=36
  push {r3,lr}
  ldr r0,[0x10064850]
  ldr r3,[0x10064854]
  ldr r2,[0x10064858]
  subs r0,r0,r3
  lsls r0,r0,#0x5
  and r0,r0,#0xff00
  orr r0,r0,#0x2700000
  ldr r1,[0x1006485c]
  orr r0,r0,#0x21
  bl 0x100a5b78
  mvn r0,#0x2
  pop {r3,pc}
