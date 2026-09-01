; FUN_10134e5c @ 0x10134e5c size=32
  push {r4,lr}
  ldr r4,[r2,#0xc]
  adds r1,#0x2
  ldrb r3,[r4,#0x0]
  cbnz r3,0x10134e6c
  strb r1,[r4,#0x0]
  movs r0,#0x1
  b 0x10134e7a
  cmp r3,r1
  beq 0x10134e68
  ldrh r3,[r0,#0xc]
  subs r3,#0x2
  strh r3,[r0,#0xc]
  movs r0,#0x0
  str r0,[r2,#0x10]
  pop {r4,pc}
