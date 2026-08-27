; FUN_2c1405e0 @ 0x2c1405e0 size=50
  push {r3,lr}
  bl 0x2c1405dc
  bl 0x2c13edb8
  mrs r3,ipsr
  cbnz r3,0x2c1405fc
  mrs r3,primask
  cbnz r3,0x2c1405fc
  mrs r3,basepri
  cbz r3,0x2c14060a
  mvn r0,#0x5
  bl 0x2c13edb4
  mvn r0,#0x5
  pop {r3,pc}
  ldr.w r12,[0x2c140614]
  svc 0x0
  pop {r3,pc}
