; FUN_1011a8d6 @ 0x1011a8d6 size=28
  push {r3,lr}
  bl 0x1005608c
  ldr r3,[r0,#0x4c]
  ldr r3,[r3,#0x8]
  tst r3,#0x180000
  bne 0x1011a8f0
  pop.w {r3,lr}
  movs r0,#0x1
  b.w 0x1011a8ae
  pop {r3,pc}
