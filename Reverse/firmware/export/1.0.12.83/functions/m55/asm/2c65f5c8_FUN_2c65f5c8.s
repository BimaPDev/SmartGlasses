; FUN_2c65f5c8 @ 0x2c65f5c8 size=32
  push {r4,lr}
  bls 0x2c65f5d6
  mov r2,r1
  ldr r0,[0x2c65f5e8]
  ldr r1,[0x2c65f5ec]
  bl 0x2c65868c
  subs r4,r3,r1
  movs r3,#0x0
  cmp r2,r4
  it cs
  mov.cs r2,r4
  pop.w {r4,lr}
  b.w 0x2c6515d4
