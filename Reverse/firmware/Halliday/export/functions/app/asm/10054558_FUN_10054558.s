; FUN_10054558 @ 0x10054558 size=32
  push {r4,lr}
  ldr r4,[0x10054578]
  add r2,r1
  cmp r1,r2
  bne 0x10054564
  pop {r4,pc}
  ldrb.w r3,[r1],#0x1
  eor.w r3,r3,r0, lsr #0x8
  ldrh.w r3,[r4,r3,lsl #0x1]
  eor.w r0,r3,r0, lsl #0x8
  uxth r0,r0
  b 0x1005455e
