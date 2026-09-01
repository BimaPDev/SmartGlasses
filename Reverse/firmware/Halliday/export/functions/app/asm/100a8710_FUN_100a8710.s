; FUN_100a8710 @ 0x100a8710 size=30
  push {r3,lr}
  cbnz r0,0x100a8722
  movw r1,#0x321
  ldr r3,[0x100a8730]
  ldr r2,[0x100a8734]
  ldr r0,[0x100a8738]
  bl 0x10117c88
  ldrb r3,[r0,#0x9]
  bfi r3,r1,#0x2,#0x1
  strb r3,[r0,#0x9]
  movs r0,#0x0
  pop {r3,pc}
