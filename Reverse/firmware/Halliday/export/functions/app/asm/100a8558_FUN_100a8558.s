; FUN_100a8558 @ 0x100a8558 size=36
  push {r3,lr}
  cbnz r0,0x100a856a
  movw r1,#0x299
  ldr r3,[0x100a857c]
  ldr r2,[0x100a8580]
  ldr r0,[0x100a8584]
  bl 0x10117c88
  ldrb r3,[r0,#0x9]
  orr r3,r3,#0x1
  strb r3,[r0,#0x9]
  ldr r0,[r0,#0x18]
  bl 0x100a05fc
  movs r0,#0x0
  pop {r3,pc}
