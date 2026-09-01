; FUN_1005393c @ 0x1005393c size=22
  push {r4,lr}
  ldr r3,[0x10053954]
  add r2,r1
  cmp r1,r2
  bne 0x10053948
  pop {r4,pc}
  ldrb.w r4,[r1],#0x1
  eors r0,r4
  ldrb r0,[r3,r0]
  b 0x10053942
