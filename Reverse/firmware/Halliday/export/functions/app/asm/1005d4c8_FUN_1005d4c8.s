; FUN_1005d4c8 @ 0x1005d4c8 size=52
  push {r4,r5,r6,lr}
  ldr r2,[0x1005d4fc]
  ldrb r1,[r2,#0x3]
  cmp r1,#0x1f
  bhi 0x1005d4fa
  movs r3,#0x6c
  mla r3,r3,r1,r2
  add.w r5,r3,#0x8
  ldrb r3,[r3,#0xa]
  cmp r3,#0x1f
  lsr.w r4,r3,#0x1
  bhi 0x1005d4fa
  adds r6,r4,#0x1
  bfi r3,r6,#0x1,#0x7
  strb r3,[r5,#0x2]
  movs r3,#0x1b
  mla r1,r3,r1,r4
  add.w r2,r2,r1, lsl #0x2
  str r0,[r2,#0x34]
  pop {r4,r5,r6,pc}
