; FUN_2c501bf8 @ 0x2c501bf8 size=38
  push {r3,lr}
  cbnz r0,0x2c501c04
  ldr r3,[0x2c501c20]
  movs r2,#0x0
  strb r2,[r3,#0x0]
  pop {r3,pc}
  movs r1,#0x0
  mov.w r0,#0x400
  bl 0x2c620fa4
  bl 0x2c4ff9d4
  bl 0x2c500840
  ldr r3,[0x2c501c20]
  movs r2,#0x0
  strb r2,[r3,#0x0]
  pop {r3,pc}
