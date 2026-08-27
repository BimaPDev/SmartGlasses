; FUN_1405b33c @ 0x1405b33c size=50
  cmp r0,#0x1
  bhi 0x1405b362
  push {r4}
  ldr r4,[0x1405b370]
  ldr.w r0,[r4,r0,lsl #0x2]
  cbz r0,0x1405b35a
  ldrb.w r12,[r0,#0x43]
  tst r12,#0x10
  beq 0x1405b35a
  tst r12,#0x4
  beq 0x1405b366
  movs r0,#0x43
  pop.w r4
  bx lr
  movs r0,#0x43
  bx lr
  pop.w r4
  b.w 0x1406d628
