; FUN_2c47e5bc @ 0x2c47e5bc size=40
  push {r2,r7,lr}
  subs r4,#0x0
  push {r4}
  ldr r4,[0x2c47e5e4]
  movs r3,#0x0
  mov r2,r4
  ldr.w r1,[r2],#0x4
  cbz r1,0x2c47e5da
  adds r3,#0x1
  cmp r3,#0xa
  bne 0x2c47e5c8
  pop.w r4
  bx lr
  str.w r0,[r4,r3,lsl #0x2]
  pop.w r4
  bx lr
