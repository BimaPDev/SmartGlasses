; FUN_10121e0c @ 0x10121e0c size=28
  push {r4,lr}
  ldr r3,[r0,#0xc]
  ldr.w r3,[r3,#0x8c]
  ldr r0,[r3,#0x8]
  ldrh.w r4,[r0,r1,lsl #0x1]
  bfi r4,r2,#0x0,#0xc
  movs r2,#0x1
  strh.w r4,[r0,r1,lsl #0x1]
  strb r2,[r3,#0x0]
  pop {r4,pc}
