; FUN_100bcac4 @ 0x100bcac4 size=40
  push {r4,lr}
  ldr r4,[0x100bcaec]
  movs r2,#0x68
  mov r0,r4
  movs r1,#0x0
  bl 0x1011ea48
  movs r3,#0x60
  movs r1,#0x0
  strb.w r3,[r4],#0x38
  movs r0,#0x2
  bl 0x100bc4bc
  mov r0,r4
  ldr r1,[0x100bcaf0]
  bl 0x1013cba6
  movs r0,#0x0
  pop {r4,pc}
