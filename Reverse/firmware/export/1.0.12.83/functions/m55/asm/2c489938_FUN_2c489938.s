; FUN_2c489938 @ 0x2c489938 size=42
  push {r3,lr}
  mov r3,r0
  mrs r2,ipsr
  cbnz r2,0x2c489948
  mrs r2,primask
  cbz r2,0x2c489952
  mov r0,r3
  bl 0x2c499eec
  movs r0,#0x0
  pop {r3,pc}
  mrs r2,basepri
  cmp r2,#0x0
  bne 0x2c489948
  ldr.w r12,[0x2c489964]
  svc 0x0
  pop {r3,pc}
