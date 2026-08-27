; FUN_2c472dbc @ 0x2c472dbc size=100
  push {r3,r4,r5,lr}
  ldrd r4,r5,[r1,#0x8]
  cbz r5,0x2c472e14
  cbz r4,0x2c472e08
  add.w r12,r3,r2, lsl #0x5
  str r5,[r4,#0xc]
  str r4,[r5,#0x8]
  add.w r12,r0,r12, lsl #0x2
  ldr.w r5,[r12,#0x60]
  cmp r5,r1
  beq 0x2c472ddc
  pop {r3,r4,r5,pc}
  cmp r0,r4
  str.w r4,[r12,#0x60]
  bne 0x2c472dda
  add.w r5,r0,r2, lsl #0x2
  movs r4,#0x1
  ldr r1,[r5,#0x14]
  lsl.w r3,r4,r3
  bic.w r3,r1,r3
  str r3,[r5,#0x14]
  cmp r3,#0x0
  bne 0x2c472dda
  ldr r3,[r0,#0x10]
  lsl.w r2,r4,r2
  bic.w r2,r3,r2
  str r2,[r0,#0x10]
  pop {r3,r4,r5,pc}
  movw r2,#0x263
  ldr r1,[0x2c472e20]
  ldr r0,[0x2c472e24]
  bl 0x2c673ca8
  movw r2,#0x262
  ldr r1,[0x2c472e20]
  ldr r0,[0x2c472e24]
  bl 0x2c673ca8
