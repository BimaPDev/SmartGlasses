; FUN_2c646978 @ 0x2c646978 size=44
  push {r3,lr}
  mov r3,r0
  mrs r2,ipsr
  cbnz r2,0x2c646988
  mrs r2,primask
  cbz r2,0x2c646994
  mov r0,r3
  movs r1,#0x0
  bl 0x2c643a64
  movs r0,#0x0
  pop {r3,pc}
  mrs r2,basepri
  cmp r2,#0x0
  bne 0x2c646988
  ldr.w r12,[0x2c6469a4]
  svc 0x0
  pop {r3,pc}
