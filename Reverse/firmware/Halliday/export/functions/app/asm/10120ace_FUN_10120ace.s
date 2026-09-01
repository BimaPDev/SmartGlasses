; FUN_10120ace @ 0x10120ace size=42
  push {r4,r5,lr}
  movs r4,#0x1c
  ldr r0,[r0,#0xc]
  ldr r2,[r0,#0x74]
  ldrb r3,[r2,#0x0]
  mla r3,r4,r3,r0
  ldr r4,[r3,#0x3c]
  movs r3,#0x0
  uxtb r0,r3
  cmp r4,r0
  bhi 0x10120aea
  movs r0,#0xff
  b 0x10120af6
  ldr r5,[r2,#0xc]
  adds r3,#0x1
  ldrh.w r5,[r5,r0,lsl #0x3]
  cmp r5,r1
  bne 0x10120ae0
  pop {r4,r5,pc}
