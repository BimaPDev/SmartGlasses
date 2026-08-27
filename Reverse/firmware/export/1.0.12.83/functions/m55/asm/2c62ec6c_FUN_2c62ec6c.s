; FUN_2c62ec6c @ 0x2c62ec6c size=20
  push {r4,lr}
  ldr r4,[r0,#0xc]
  ldrd r3,r0,[r4,#0x0]
  blx r3
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c62bea8
