; FUN_2c47a370 @ 0x2c47a370 size=40
  push {r3,r4,r5,lr}
  ldr r3,[0x2c47a404]
  mov r4,r1
  ldr.w r5,[r3,r1,lsl #0x2]
  ldrb.w r3,[r5,#0x210]
  subs r3,#0x2
  cmp r3,#0x7
  bhi 0x2c47a39a
  tbb [pc,r3]
  ldr r2,[0x2c47a408]
  movw r0,#0x711
  ldr r1,[0x2c47a40c]
  pop.w {r3,r4,r5,lr}
  b.w 0x2c6741e8
