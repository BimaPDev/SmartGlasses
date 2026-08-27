; FUN_2c623e50 @ 0x2c623e50 size=46
  cbz r1,0x2c623e7a
  subs r2,r0,#0x1
  mov.w r0,#0xffffffff
  push {r4}
  add r1,r2
  ldr r4,[0x2c623e80]
  ldrb.w r3,[r2,#0x1]!
  eors r3,r0
  cmp r1,r2
  uxtb r3,r3
  ldr.w r3,[r4,r3,lsl #0x2]
  eor.w r0,r3,r0, lsr #0x8
  bne 0x2c623e5e
  mvns r0,r0
  pop.w r4
  bx lr
  mov r0,r1
  bx lr
