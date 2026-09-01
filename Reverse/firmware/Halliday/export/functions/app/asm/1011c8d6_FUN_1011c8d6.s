; FUN_1011c8d6 @ 0x1011c8d6 size=66
  subs r1,#0x1
  sxtb r1,r1
  add.w r3,r0,r1, lsl #0x2
  cmp r1,#0x0
  bge 0x1011c8ec
  adds r1,#0x1
  sxtb r1,r1
  cbnz r1,0x1011c8fa
  mov r0,r1
  bx lr
  ldr.w r2,[r3],#-0x4
  cmp r2,#0x0
  bne 0x1011c8e2
  subs r1,#0x1
  sxtb r1,r1
  b 0x1011c8de
  add.w r3,r1,#0x40000000
  subs r3,#0x1
  ldr.w r3,[r0,r3,lsl #0x2]
  movs r0,#0x0
  cbnz r3,0x1011c912
  subs r1,#0x1
  add.w r1,r0,r1, lsl #0x5
  sxth r0,r1
  bx lr
  lsrs r3,r3,#0x1
  adds r0,#0x1
  b 0x1011c906
