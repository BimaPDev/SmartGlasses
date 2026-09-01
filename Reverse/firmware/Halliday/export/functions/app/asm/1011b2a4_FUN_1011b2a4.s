; FUN_1011b2a4 @ 0x1011b2a4 size=24
  push {r3,r4,r5,lr}
  mov r4,r0
  adds r5,r0,#0x4
  ldr r3,[r4,#0x4]
  cmp r3,r5
  beq 0x1011b2ba
  mov r0,r4
  bl 0x1011b224
  cmp r0,#0x0
  bne 0x1011b2aa
  pop {r3,r4,r5,pc}
