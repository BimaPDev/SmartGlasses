; FUN_100a1a14 @ 0x100a1a14 size=32
  push {r4,lr}
  mov r4,r0
  mov.w r1,#0xffffffff
  ldr r0,[0x100a1a34]
  bl 0x1011dbf4
  ldr r2,[0x100a1a38]
  ldrb r3,[r2,#0x0]
  bic.w r0,r3,r4
  strb r0,[r2,#0x0]
  pop.w {r4,lr}
  b.w 0x100a1684
