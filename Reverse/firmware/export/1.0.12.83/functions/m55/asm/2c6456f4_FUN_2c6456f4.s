; FUN_2c6456f4 @ 0x2c6456f4 size=46
  push {r3,lr}
  bl 0x2c6439f8
  mrs r3,ipsr
  cbnz r3,0x2c64570c
  mrs r3,primask
  cbnz r3,0x2c64570c
  mrs r3,basepri
  cbz r3,0x2c64571a
  mvn r0,#0x5
  bl 0x2c6439ec
  mvn r0,#0x5
  pop {r3,pc}
  ldr.w r12,[0x2c645724]
  svc 0x0
  pop {r3,pc}
