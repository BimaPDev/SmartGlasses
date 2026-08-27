; FUN_2c4de5f8 @ 0x2c4de5f8 size=28
  ldr r2,[0x2c4de614]
  push {r4,r5,lr}
  str r2,[r0,#0x0]
  movs r4,#0x0
  movs r2,#0x0
  movs r5,#0x0
  str r2,[r0,#0x4]
  strd r4,r5,[r0,#0x8]
  strd r2,r2,[r0,#0x10]
  strd r4,r5,[r0,#0x18]
  pop {r4,r5,pc}
