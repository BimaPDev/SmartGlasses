; FUN_2c65e646 @ 0x2c65e646 size=22
  push {r4,r5,lr}
  movs r2,#0x0
  mov.w r4,#0xffffffff
  mov.w r5,#0xffffffff
  strd r2,r2,[r0,#0x8]
  strd r4,r5,[r0,#0x0]
  pop {r4,r5,pc}
