; FUN_100e7e2c @ 0x100e7e2c size=18
  push {r3,lr}
  bl 0x10115464
  ldr r3,[0x100e7e40]
  ldr r3,[r3,#0x0]
  subs r3,r3,r0
  rsbs r0,r3
  adcs r0,r3
  pop {r3,pc}
