; FUN_14086168 @ 0x14086168 size=38
  push {r4,lr}
  bl 0x14085e30
  cbz r0,0x14086184
  mov r4,r0
  adds r0,#0x8
  bl 0x14074b88
  cbnz r0,0x14086184
  ldr r3,[r4,#0x8]
  cbz r3,0x14086184
  ldrb r2,[r3,#0xf]
  cmp r2,#0x2
  beq 0x1408618a
  movw r0,#0xffff
  pop {r4,pc}
  ldrh r0,[r3,#0xc]
  pop {r4,pc}
