; FUN_2c646948 @ 0x2c646948 size=44
  push {r3,lr}
  mov r3,r0
  mrs r2,ipsr
  cbnz r2,0x2c646958
  mrs r2,primask
  cbz r2,0x2c646964
  mov r0,r3
  movs r1,#0x0
  bl 0x2c643a60
  movs r0,#0x0
  pop {r3,pc}
  mrs r2,basepri
  cmp r2,#0x0
  bne 0x2c646958
  ldr.w r12,[0x2c646974]
  svc 0x0
  pop {r3,pc}
