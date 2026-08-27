; FUN_2c5c8e60 @ 0x2c5c8e60 size=44
  push {r3,lr}
  bl 0x2c63c57c
  subs r3,r0,#0x2
  uxtb r3,r3
  cmp r3,#0x1
  bls 0x2c5c8e70
  cbnz r0,0x2c5c8e7a
  movs r0,#0x0
  pop.w {r3,lr}
  b.w 0x2c5c8e08
  bl 0x2c5210a8
  bl 0x2c5210fc
  movs r0,#0x1
  pop.w {r3,lr}
  b.w 0x2c5c8e08
