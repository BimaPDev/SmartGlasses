; FUN_2c1382a8 @ 0x2c1382a8 size=72
  push {r3,r4,r5,r6,r7,lr}
  movs r4,#0x0
  ldr r5,[0x2c1382f0]
  ldr r6,[0x2c1382f4]
  ldr r7,[0x2c1382f8]
  add.w r3,r5,r4, lsl #0x5
  ldr r2,[r3,#0x14]
  lsls r2,r2,#0x1f
  bmi 0x2c1382c0
  cbz r4,0x2c1382e2
  pop {r3,r4,r5,r6,r7,pc}
  movs r0,#0x1
  add.w r2,r6,r4, lsl #0x2
  str r0,[r3,#0xc]
  ldr r1,[0x2c1382fc]
  ldr r2,[r2,#0x10]
  lsl.w r12,r4,#0x2
  add r1,r12
  cbz r2,0x2c1382e6
  ldr r3,[r1,#0x10]
  ldr r0,[r7,#0x4]
  add r0,r3
  rsbs r0,r0
  blx r2
  cmp r4,#0x0
  bne 0x2c1382be
  movs r4,#0x1
  b 0x2c1382b2
  ldr r2,[r3,#0x8]
  bic r2,r2,#0x20
  str r2,[r3,#0x8]
  b 0x2c1382bc
