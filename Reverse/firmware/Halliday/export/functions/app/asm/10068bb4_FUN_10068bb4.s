; FUN_10068bb4 @ 0x10068bb4 size=24
  push {r3,lr}
  movs r1,#0x5
  ldr r0,[0x10068bcc]
  bl 0x10068b84
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x4
  svc 0x2
  pop {r3,pc}
