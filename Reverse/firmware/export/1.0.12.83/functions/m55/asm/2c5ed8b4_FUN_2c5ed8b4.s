; FUN_2c5ed8b4 @ 0x2c5ed8b4 size=128
  push {r4,lr}
  ldr r4,[0x2c5ed940]
  mov.w r1,#0xffffffff
  sub sp,#0x10
  ldr r0,[r4,#0x0]
  bl 0x2c644044
  ldr r2,[0x2c5ed944]
  ldrb.w r3,[r2,#0x3a1]
  ldrb.w r1,[r2,#0x3a0]
  cmp r1,r3
  beq 0x2c5ed900
  add.w r0,r3,r3, lsl #0x1
  adds r3,#0x1
  add.w r1,r2,#0x2e0
  and r3,r3,#0xf
  strb.w r3,[r2,#0x3a1]
  ldr.w r3,[r1,r0,lsl #0x2]
  add.w r1,r1,r0, lsl #0x2
  ldr r0,[0x2c5ed948]
  cmp r3,r0
  beq 0x2c5ed92e
  ldr r0,[r1,#0x8]
  ldr.w r2,[r2,#0x3b0]
  cmp r2,r0
  bne 0x2c5ed90c
  ldr r0,[r1,#0x4]
  blx r3
  ldr r0,[r4,#0x0]
  add sp,#0x10
  pop.w {r4,lr}
  b.w 0x2c644080
  ldr r3,[0x2c5ed94c]
  movw r2,#0x1a9
  ldr r1,[0x2c5ed950]
  strd r3,r0,[sp,#0x4]
  str r1,[sp,#0x0]
  movs r0,#0x4
  ldr r1,[0x2c5ed954]
  bl 0x2c62c82c
  ldr r0,[r1,#0x4]
  bl 0x2c5ec60c
  ldr r0,[r4,#0x0]
  add sp,#0x10
  pop.w {r4,lr}
  b.w 0x2c644080
