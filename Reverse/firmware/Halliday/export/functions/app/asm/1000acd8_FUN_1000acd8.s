; FUN_1000acd8 @ 0x1000acd8 size=82
  push {r0,r1,r2,r4,r5,r6,r7,lr}
  movs r1,#0x8
  movs r7,#0x1
  ldr r3,[0x1000ad2c]
  ldr r2,[0x1000ad30]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldrb r3,[r2,#0xd]
  adds r4,r3,r1
  add.w r5,r2,r4, lsl #0x3
  ldrb r6,[r5,#0x4]
  cbnz r6,0x1000ad22
  movs r6,#0x1
  str.w r0,[r2,r4,lsl #0x3]
  strb r7,[r5,#0x4]
  adds r3,#0x1
  uxtb r3,r3
  cmp r3,#0x8
  it cs
  mov.cs r3,#0x0
  cbnz r6,0x1000ad12
  subs r1,#0x1
  ands r1,r1,#0xff
  bne 0x1000acf2
  strb r3,[r2,#0xd]
  ldr r3,[0x1000ad2c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1000ad26
  bl 0x1013cdc0
  movs r6,#0x0
  b 0x1000acfe
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
