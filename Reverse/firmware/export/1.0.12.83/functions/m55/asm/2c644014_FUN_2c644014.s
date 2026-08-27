; FUN_2c644014 @ 0x2c644014 size=42
  push {r3,lr}
  mov r3,r0
  mrs r2,ipsr
  cbnz r2,0x2c64402a
  mrs r2,primask
  cbnz r2,0x2c64402a
  mrs r2,basepri
  cbz r2,0x2c644036
  mov r0,r3
  movs r1,#0x0
  bl 0x2c643b14
  movs r0,#0x0
  pop {r3,pc}
  ldr.w r12,[0x2c644040]
  svc 0x0
  pop {r3,pc}
