; FUN_100539a4 @ 0x100539a4 size=24
  push {r4,r5,r6,lr}
  mov r4,r0
  ldr r6,[0x100539bc]
  adds r5,r0,r1
  cmp r4,r5
  bne 0x100539b2
  pop {r4,r5,r6,pc}
  ldr r3,[r6,#0x0]
  ldrb.w r0,[r4],#0x1
  blx r3
  b 0x100539ac
