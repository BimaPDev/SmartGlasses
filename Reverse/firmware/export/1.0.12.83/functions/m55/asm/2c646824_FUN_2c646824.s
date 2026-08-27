; FUN_2c646824 @ 0x2c646824 size=42
  push {r3,lr}
  mov r3,r0
  mrs r2,ipsr
  cbnz r2,0x2c64683a
  mrs r2,primask
  cbnz r2,0x2c64683a
  mrs r2,basepri
  cbz r2,0x2c646846
  mov r0,r3
  movs r1,#0x0
  bl 0x2c643a54
  movs r0,#0x0
  pop {r3,pc}
  ldr.w r12,[0x2c646850]
  svc 0x0
  pop {r3,pc}
