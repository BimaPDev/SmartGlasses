; FUN_2c646b80 @ 0x2c646b80 size=40
  push {r3,lr}
  mrs r3,ipsr
  cbnz r3,0x2c646b8e
  mrs r3,primask
  cbz r3,0x2c646b98
  movs r0,#0x0
  bl 0x2c643ab0
  movs r0,#0x0
  pop {r3,pc}
  mrs r3,basepri
  cmp r3,#0x0
  bne 0x2c646b8e
  ldr.w r12,[0x2c646ba8]
  svc 0x0
  pop {r3,pc}
