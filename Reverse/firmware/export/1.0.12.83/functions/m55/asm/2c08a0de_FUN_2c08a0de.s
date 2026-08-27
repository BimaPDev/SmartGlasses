; FUN_2c08a0de @ 0x2c08a0de size=24
  push {r0,r1,r2,r7,lr}
  b 0x2c08a410
  sbcs r0,r7
  subs r5,#0x1b
  ldr r1,[r0,#0x40]
  ldrh r4,[r0,#0x2e]
  subs r1,#0x75
  sxth r6,r7
  ldrh r7,[r5,#0x16]
  strd r12,r1,[r6],#0xb8
  subs r3,#0xff
