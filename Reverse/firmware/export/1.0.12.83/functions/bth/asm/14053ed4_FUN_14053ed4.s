; FUN_14053ed4 @ 0x14053ed4 size=68
  push {r3,r4,r5,lr}
  mov r5,r1
  mov r4,r3
  bl 0x14053e98
  cbnz r0,0x14053f12
  cbz r4,0x14053f12
  ldr r3,[sp,#0x10]
  ldr r1,[sp,#0x10]
  add.w r12,r4,#0xffffffff
  uxtb.w r12,r12
  ldr r2,[sp,#0x14]
  subs r3,#0x2
  add.w r12,r1,r12, lsl #0x1
  ldrh.w r4,[r3,#0x2]!
  cbnz r4,0x14053f0a
  ldrb r4,[r2,#0x2]
  lsls r1,r4,#0x1f
  bpl 0x14053f0a
  ldrb r1,[r2,#0x3]
  ldrh.w r1,[r5,r1,lsl #0x2]
  cbnz r1,0x14053f14
  cmp r12,r3
  add.w r2,r2,#0x4
  bne 0x14053ef6
  pop {r3,r4,r5,pc}
  movs r0,#0x83
  pop {r3,r4,r5,pc}
