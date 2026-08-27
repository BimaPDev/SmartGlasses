; FUN_2c664b98 @ 0x2c664b98 size=24
  push {r4,lr}
  ldr r4,[r0,#0x4]
  cmp r4,r1
  bcs 0x2c664ba8
  subs r1,r1,r4
  bl 0x2c664b84
  pop {r4,pc}
  bls 0x2c664ba6
  bl 0x2c664850
  b 0x2c664ba6
