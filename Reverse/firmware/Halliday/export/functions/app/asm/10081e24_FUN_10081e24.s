; FUN_10081e24 @ 0x10081e24 size=42
  push {r3,lr}
  bl 0x1013c70e
  cbnz r0,0x10081e30
  movs r0,#0x0
  pop {r3,pc}
  bl 0x1005d200
  cmp r0,#0x0
  bne 0x10081e2c
  ldr r0,[0x10081e50]
  bl 0x10119dc2
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x4
  svc 0x2
  movs r0,#0x1
  b 0x10081e2e
