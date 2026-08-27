; FUN_2c57ec48 @ 0x2c57ec48 size=46
  push {r4,lr}
  ldr r4,[r0,#0xc]
  ldrb.w r3,[r4,#0x36]
  subs r3,#0x1
  uxtb r3,r3
  cmp r3,#0xa
  strb.w r3,[r4,#0x36]
  bls 0x2c57ec5e
  pop {r4,pc}
  mov r0,r4
  bl 0x2c57eac0
  ldrb.w r3,[r4,#0x36]
  cmp r3,#0x0
  bne 0x2c57ec5c
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c57eb30
