; FUN_10121d3e @ 0x10121d3e size=48
  push {r4,r5,lr}
  movs r5,#0x1c
  ldr r4,[r0,#0xc]
  ldr r0,[r4,#0x74]
  ldrb r3,[r0,#0x0]
  mla r3,r5,r3,r4
  ldr r4,[r3,#0x3c]
  movs r3,#0x0
  cmp r4,r3
  bne 0x10121d58
  movs r0,#0x0
  pop {r4,r5,pc}
  ldr r5,[r0,#0xc]
  ldrh.w r5,[r5,r3,lsl #0x3]
  cmp r5,r1
  bne 0x10121d6a
  cbz r2,0x10121d66
  str r3,[r2,#0x0]
  movs r0,#0x1
  b 0x10121d56
  adds r3,#0x1
  b 0x10121d50
