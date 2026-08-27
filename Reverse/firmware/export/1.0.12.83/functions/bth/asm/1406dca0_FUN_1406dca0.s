; FUN_1406dca0 @ 0x1406dca0 size=58
  push {r3,lr}
  ldr r2,[0x1406dcdc]
  adds r3,r0,#0x6
  ldr.w r2,[r2,r3,lsl #0x2]
  cbz r2,0x1406dcd6
  ldrb.w r3,[r2,#0x3a]
  and r12,r3,#0x1
  cmp r12,r1
  beq 0x1406dcca
  bic r3,r3,#0x1
  cmp r1,#0x0
  it ne
  orr.ne r3,r3,#0x1
  strb.w r3,[r2,#0x3a]
  bne 0x1406dcce
  movs r0,#0x0
  pop {r3,pc}
  bl 0x14070c18
  movs r0,#0x0
  b 0x1406dccc
  movs r0,#0x43
  pop {r3,pc}
