; FUN_2c140618 @ 0x2c140618 size=46
  push {r3,lr}
  bl 0x2c13edc0
  mrs r3,ipsr
  cbnz r3,0x2c140630
  mrs r3,primask
  cbnz r3,0x2c140630
  mrs r3,basepri
  cbz r3,0x2c14063e
  mvn r0,#0x5
  bl 0x2c13edb4
  mvn r0,#0x5
  pop {r3,pc}
  ldr.w r12,[0x2c140648]
  svc 0x0
  pop {r3,pc}
