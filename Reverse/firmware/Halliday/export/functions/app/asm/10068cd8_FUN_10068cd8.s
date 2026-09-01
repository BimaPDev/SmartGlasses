; FUN_10068cd8 @ 0x10068cd8 size=28
  push {r3,lr}
  movs r1,#0x1d
  ldr r0,[0x10068cf0]
  bl 0x10068b84
  eors r0,r0
  msr basepri,r0
  mov.w r0,#0x3
  svc 0x2
  nop
  ldrsh r4,[r2,r1]
  asrs r6,r2,#0x20
