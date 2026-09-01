; FUN_1012113a @ 0x1012113a size=52
  push {r4,lr}
  ldr r1,[r0,#0xc]
  movs r0,#0x1c
  ldr r2,[r1,#0x74]
  movw r4,#0xfff
  ldrb r3,[r2,#0x0]
  mla r3,r0,r3,r1
  movs r0,#0x0
  ldr r1,[r3,#0x38]
  cmp r1,r0
  bne 0x10121158
  movs r0,#0xff
  b 0x10121168
  ldr r3,[r2,#0x10]
  ldrh.w r3,[r3,r0,lsl #0x1]
  ubfx r3,r3,#0x0,#0xc
  cmp r3,r4
  bne 0x1012116a
  uxtb r0,r0
  pop {r4,pc}
  adds r0,#0x1
  b 0x10121150
