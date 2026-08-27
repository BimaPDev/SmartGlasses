; FUN_2c4babcc @ 0x2c4babcc size=98
  push {r4,r5,r6,lr}
  mov r5,r1
  mov r4,r0
  bl 0x2c674348
  cmp.w r5,r0, lsr #0x4
  lsr.w r6,r0,#0x4
  bls 0x2c4bac14
  lsls r6,r6,#0x1
  movs r0,#0x1
  cbz r4,0x2c4bac1a
  cmp r4,#0x1
  beq 0x2c4bac20
  lsrs r3,r5,#0x1
  movw r1,#0xfffd
  add.w r3,r3,r6, lsl #0x6
  udiv r3,r3,r5
  lsrs r2,r3,#0x6
  and r3,r3,#0x3f
  subs r0,r2,#0x1
  cmp r0,r1
  bhi 0x2c4bac26
  ldr r1,[0x2c4bac30]
  add.w r4,r4,r4, lsl #0x1
  ldr.w r1,[r1,r4,lsl #0x2]
  str r2,[r1,#0x24]
  str r3,[r1,#0x28]
  pop {r4,r5,r6,pc}
  movs r0,#0x0
  cmp r4,#0x0
  bne 0x2c4babe6
  bl 0x2c674358
  b 0x2c4babea
  bl 0x2c674548
  b 0x2c4babea
  mov r1,r5
  ldr r0,[0x2c4bac34]
  bl 0x2c673ca8
