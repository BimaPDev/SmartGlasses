; FUN_1406d250 @ 0x1406d250 size=102
  push {r3,r4,r5,lr}
  ldr r3,[0x14069298]
  adds r0,#0x22
  ldr.w r5,[r3,r0,lsl #0x2]
  mov r4,r1
  cbz r5,0x14069288
  ldr.w r2,[r5,r4,lsl #0x2]
  cbz r2,0x14069274
  ldrh r3,[r2,#0xe]
  ands r0,r3,#0x40
  bne 0x1406926c
  ldr r1,[r2,#0x0]
  cbz r1,0x1406926c
  ldrb.w r3,[r1,#0x2d]
  lsls r2,r3,#0x1c
  bmi 0x14069262
  and r3,r3,#0xf
  adds r3,#0x3
  add.w r0,r1,r3, lsl #0x2
  mov r1,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x14058748
  bic r3,r3,#0x200
  strh r3,[r2,#0xe]
  pop {r3,r4,r5,pc}
  movw r2,#0x542
  movs r0,#0x42
  ldr r3,[0x1406929c]
  ldr r1,[0x140692a0]
  bl 0x1402a64c
  movw r2,#0x541
  ldr r3,[0x1406929c]
  ldr r1,[0x140692a0]
  movs r0,#0x42
  bl 0x1402a64c
  ldrb r1,[r1,#0x10]
  b.w 0x14069230
