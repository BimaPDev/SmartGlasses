; FUN_1007a48c @ 0x1007a48c size=30
  ldr r2,[0x1007a4ac]
  ldrb.w r3,[r2,#0x30]
  strh.w r0,[r2,r3,lsl #0x1]
  movs r0,#0x18
  adds r3,#0x1
  udiv r1,r3,r0
  mls r3,r0,r1,r3
  strb.w r3,[r2,#0x30]
  b.w 0x1007a430
