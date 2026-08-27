; FUN_2c020b62 @ 0x2c020b62 size=46
  push {r3,lr}
  bl 0x2c020ba4
  ldr r0,[0x2c020b78]
  pop.w {r3,lr}
  b.w 0x2c020bc4
  movs r3,#0x0
  movs r2,#0xa
  strd r3,r3,[r0,#0x4]
  strh r2,[r0,#0x0]
  str r3,[r0,#0x2c]
  strd r3,r3,[r0,#0xc]
  strd r3,r3,[r0,#0x14]
  strd r3,r3,[r0,#0x1c]
  strd r3,r3,[r0,#0x24]
  bx lr
