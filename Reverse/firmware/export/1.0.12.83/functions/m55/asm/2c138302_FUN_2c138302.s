; FUN_2c138302 @ 0x2c138302 size=160
  push {r4,r5,r6,lr}
  beq 0x2c13830e
  cmp r2,#0x2
  ite eq
  mov.eq r2,#0x40
  mov.ne r2,#0x0
  movs r5,#0x1
  ldr r4,[0x2c1383a4]
  ldr r6,[0x2c1383a8]
  ldr.w r4,[r4,r0,lsl #0x2]
  add.w lr,r1,r0, lsl #0x1
  add.w r12,r4,r1, lsl #0x5
  str.w r3,[r6,lr,lsl #0x2]
  lsls r0,r5
  str.w r5,[r12,#0xc]
  lsl.w r12,r1,#0x5
  cbz r3,0x2c13837e
  ldr r3,[0x2c1383ac]
  ldr.w r6,[r3,lr,lsl #0x2]
  cbz r6,0x2c13837e
  ldr r3,[0x2c1383b0]
  add r0,r3
  ldrsb r3,[r0,r1]
  ldr r1,[0x2c1383b4]
  add.w lr,r3,#0x10
  ldr r0,[r1,#0x8]
  str.w r6,[r0,lr,lsl #0x2]
  dsb #0xf
  cmp r3,#0x0
  blt 0x2c138388
  movs r6,#0xa0
  lsrs r1,r3,#0x5
  lsls r1,r1,#0x2
  add.w r0,r3,#0xe0000000
  add.w r1,r1,#0xe0000000
  and r3,r3,#0x1f
  add.w r1,r1,#0xe100
  lsl.w r3,r5,r3
  add.w r0,r0,#0xe100
  strb.w r6,[r0,#0x300]
  str.w r3,[r1,#0x180]
  str r3,[r1,#0x0]
  orr r2,r2,#0x20
  orr r2,r2,#0x2
  add r4,r12
  str r2,[r4,#0x8]
  pop {r4,r5,r6,pc}
  and r3,r3,#0xf
  subs r3,#0x4
  add r3,r1
  movs r1,#0xa0
  orr r2,r2,#0x20
  orr r2,r2,#0x2
  add r4,r12
  strb r1,[r3,#0x18]
  str r2,[r4,#0x8]
  pop {r4,r5,r6,pc}
