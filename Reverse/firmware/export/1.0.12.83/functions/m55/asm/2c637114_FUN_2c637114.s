; FUN_2c637114 @ 0x2c637114 size=36
  cmp.w r1,#0x168
  push {r4,r5,r6,lr}
  mov r4,r1
  mov r5,r0
  bls 0x2c637126
  sub.w r4,r1,#0x168
  uxth r4,r4
  ldrh r3,[r5,#0x2a]
  ldrh r6,[r5,#0x2c]
  subs r2,r6,r3
  subs r3,r4,r3
  sxth r1,r2
  uxth r0,r3
  cmp r1,#0x0
  uxth r2,r2
  sxth r3,r3
