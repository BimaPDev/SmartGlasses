; FUN_100df30c @ 0x100df30c size=28
  movs r3,#0xff
  push {r4,lr}
  ldr r2,[0x100df328]
  add r0,r1
  cmp r1,r0
  bne 0x100df31e
  mvns r0,r3
  uxtb r0,r0
  pop {r4,pc}
  ldrb.w r4,[r1],#0x1
  eors r3,r4
  ldrb r3,[r2,r3]
  b 0x100df314
