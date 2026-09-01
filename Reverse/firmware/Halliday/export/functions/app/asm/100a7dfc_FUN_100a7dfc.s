; FUN_100a7dfc @ 0x100a7dfc size=36
  push {r3,lr}
  ldr r3,[0x100a7e20]
  ldr r1,[r3,#0x0]
  cbz r1,0x100a7e1a
  bl 0x100a7d8c
  ldr r3,[r1,#0x14]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x4
  beq 0x100a7e14
  cmp r3,#0x18
  bne 0x100a7e18
  ldrb.w r0,[r1,#0x2b]
  pop {r3,pc}
  mvn r0,#0x2
  b 0x100a7e18
