; FUN_2c6456bc @ 0x2c6456bc size=50
  push {r3,lr}
  bl 0x2c6456b8
  bl 0x2c6439f0
  mrs r3,ipsr
  cbnz r3,0x2c6456d8
  mrs r3,primask
  cbnz r3,0x2c6456d8
  mrs r3,basepri
  cbz r3,0x2c6456e6
  mvn r0,#0x5
  bl 0x2c6439ec
  mvn r0,#0x5
  pop {r3,pc}
  ldr.w r12,[0x2c6456f0]
  svc 0x0
  pop {r3,pc}
