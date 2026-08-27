; FUN_140516a0 @ 0x140516a0 size=38
  push {r3,lr}
  movs r0,#0x0
  bl 0x1404a1b4
  ldrb.w r3,[r0,#0xd8]
  movs r0,#0x0
  cmp r3,#0x1
  beq 0x140516c4
  bl 0x1404a1b4
  ldrb.w r0,[r0,#0xd8]
  clz r0,r0
  lsrs r0,r0,#0x5
  rsbs r0,r0
  uxtb r0,r0
  pop {r3,pc}
