; FUN_1011a6a0 @ 0x1011a6a0 size=60
  cmp r1,r0
  mov r2,r0
  lsl.w r3,r0,#0x1
  bls 0x1011a6b2
  adds r0,r3,r0
  cmp.w r1,r0, lsr #0x1
  bls 0x1011a6d4
  cmp r3,r1
  bcs 0x1011a6c0
  add.w r3,r2,r2, lsl #0x2
  cmp.w r1,r3, lsr #0x1
  bls 0x1011a6d8
  subs r3,r2,#0x1
  add r1,r3
  udiv r0,r1,r2
  subs r0,#0x1
  uxtb r0,r0
  cmp r0,#0xd
  it cs
  mov.cs r0,#0xd
  bx lr
  movs r0,#0xe
  bx lr
  movs r0,#0xf
  bx lr
