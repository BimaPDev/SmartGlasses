; FUN_10068e38 @ 0x10068e38 size=54
  mvns r0,r0
  push {r4,r5,r6,lr}
  ldr r5,[0x10068e70]
  add r2,r1
  cmp r1,r2
  bne 0x10068e48
  mvns r0,r0
  pop {r4,r5,r6,pc}
  ldrb.w r6,[r1],#0x1
  eor.w r4,r6,r0
  and r4,r4,#0xf
  ldr.w r3,[r5,r4,lsl #0x2]
  eor.w r0,r3,r0, lsr #0x4
  and r3,r0,#0xf
  eor.w r3,r3,r6, lsr #0x4
  ldr.w r3,[r5,r3,lsl #0x2]
  eor.w r0,r3,r0, lsr #0x4
  b 0x10068e40
