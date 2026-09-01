; FUN_1007b37c @ 0x1007b37c size=54
  push {r3,r4,r5,lr}
  bl 0x1007c388
  movs r4,#0x0
  ldr r5,[0x1007b3b4]
  bl 0x1007b2e4
  cmp r0,#0x0
  ble 0x1007b39e
  add.w r3,r5,r4, lsl #0x1
  strh.w r0,[r3,#0xec]
  movw r0,#0x14d
  bl 0x1013cd58
  adds r4,#0x1
  cmp r4,#0x1e
  bne 0x1007b386
  movs r2,#0x0
  ldr r3,[0x1007b3b4]
  strb.w r2,[r3,#0x156]
  strh.w r2,[r3,#0x152]
  pop {r3,r4,r5,pc}
