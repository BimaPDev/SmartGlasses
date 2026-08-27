; FUN_2c6154a4 @ 0x2c6154a4 size=98
  subs r3,r1,#0x1
  bpl 0x2c6154ae
  subs r0,#0x1
  add.w r3,r1,#0xb
  cmp r3,#0xb
  ble 0x2c6154b6
  adds r0,#0x1
  subs r3,#0xc
  cmp r3,#0x1
  beq 0x2c6154de
  ldr r2,[0x2c615508]
  asrs r0,r3,#0x1f
  smull r1,r2,r2,r3
  add r2,r3
  rsb r0,r0,r2, asr #0x2
  rsb r0,r0,r0, lsl #0x3
  subs r3,r3,r0
  and r0,r3,#0x1
  it mi
  rsb.mi r0,r0
  rsb.w r0,r0,#0x1f
  uxtb r0,r0
  bx lr
  lsls r3,r0,#0x1e
  bne 0x2c6154fe
  ldr r2,[0x2c61550c]
  ldr r3,[0x2c615510]
  mul r0,r2,r0
  cmp.w r3,r0, ror #0x2
  bcc 0x2c615502
  ldr r3,[0x2c615514]
  cmp.w r3,r0, ror #0x4
  ite cc
  mov.cc r0,#0x1c
  mov.cs r0,#0x1d
  bx lr
  movs r0,#0x1c
  bx lr
  movs r0,#0x1d
  bx lr
