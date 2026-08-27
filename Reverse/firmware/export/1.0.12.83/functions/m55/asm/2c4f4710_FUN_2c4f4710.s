; FUN_2c4f4710 @ 0x2c4f4710 size=82
  push {r4,lr}
  ldr r4,[0x2c4f4764]
  sub sp,#0x8
  str r4,[sp,#0x0]
  bl 0x2c4f3f30
  subs r4,r0,#0x0
  blt 0x2c4f4726
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
  movs r2,#0x0
  ldr r1,[0x2c4f4768]
  mov r3,r2
  b 0x2c4f4732
  ldrsb.w r2,[r1,r3,lsl #0x3]
  cmp r4,r2
  beq 0x2c4f4758
  adds r3,#0x1
  cmp r3,#0xf
  bne 0x2c4f472e
  ldr r0,[0x2c4f476c]
  ldr r1,[0x2c4f4770]
  movw r2,#0x1409
  ldr r3,[0x2c4f4774]
  strd r0,r1,[sp,#0x0]
  ldr r1,[0x2c4f4778]
  ldr r0,[0x2c4f477c]
  bl 0x2c66ac44
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
  ldr r2,[0x2c4f4768]
  add.w r3,r2,r3, lsl #0x3
  ldr r0,[r3,#0x4]
  b 0x2c4f473e
