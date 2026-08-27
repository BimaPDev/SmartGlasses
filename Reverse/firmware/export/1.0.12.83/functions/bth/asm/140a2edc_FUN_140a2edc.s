; FUN_140a2edc @ 0x140a2edc size=38
  mvn.w r12,r0
  cbz r2,0x140a2f00
  ldr r0,[0x140a2f04]
  add r2,r1
  ldrb.w r3,[r1],#0x1
  eor.w r3,r3,r12
  uxtb r3,r3
  ldr.w r3,[r0,r3,lsl #0x2]
  cmp r1,r2
  eor.w r12,r3,r12, lsr #0x8
  bne 0x140a2ee6
  mvn.w r0,r12
  bx lr
