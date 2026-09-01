; FUN_1011d2ac @ 0x1011d2ac size=40
  push {r4,r5,r6,r7,lr}
  movs r5,#0x0
  subs r7,r1,#0x1
  sxtb r4,r5
  cmp r4,r1
  add.w r5,r5,#0x1
  blt 0x1011d2be
  pop {r4,r5,r6,r7,pc}
  subs r3,r7,r4
  bic r6,r3,#0x3
  ldr r6,[r2,r6]
  and r3,r3,#0x3
  lsls r3,r3,#0x3
  lsr.w r3,r6,r3
  strb r3,[r0,r4]
  b 0x1011d2b2
