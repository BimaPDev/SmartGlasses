; FUN_2c6444fc @ 0x2c6444fc size=50
  push {r4,lr}
  mov r4,r0
  bl 0x2c643acc
  mrs r3,ipsr
  cbnz r3,0x2c644516
  mrs r3,primask
  cbnz r3,0x2c644516
  mrs r3,basepri
  cbz r3,0x2c644524
  mvn r0,#0x5
  bl 0x2c643ac8
  mvn r0,#0x5
  pop {r4,pc}
  mov r0,r4
  ldr.w r12,[0x2c644530]
  svc 0x0
  pop {r4,pc}
