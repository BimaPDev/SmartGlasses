; FUN_14066150 @ 0x14066150 size=32
  movs r1,#0x0
  ldr r3,[0x14066170]
  add.w r12,r3,#0x84
  ldr r2,[r3,#0x0]
  cbz r2,0x14066166
  ldrb r2,[r3,#0x9]
  cmp r2,r0
  itt eq
  add.eq r1,#0x1
  uxtb.eq r1,r1
  adds r3,#0xc
  cmp r3,r12
  bne 0x14066158
  mov r0,r1
  bx lr
