; FUN_2c658ff4 @ 0x2c658ff4 size=40
  ldr r3,[r0,#0x0]
  ldr.w r3,[r3,#-0xc]
  cmp r1,r3
  push {r4,lr}
  bls 0x2c65900a
  mov r2,r1
  ldr r0,[0x2c65901c]
  ldr r1,[0x2c659020]
  bl 0x2c65868c
  subs r4,r3,r1
  movs r3,#0x0
  cmp r2,r4
  it cs
  mov.cs r2,r4
  pop.w {r4,lr}
  b.w 0x2c650ea0
