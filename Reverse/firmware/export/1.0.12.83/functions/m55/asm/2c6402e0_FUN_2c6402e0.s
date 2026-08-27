; FUN_2c6402e0 @ 0x2c6402e0 size=18
  push {r4,lr}
  ldr r4,[0x2c6402f4]
  ldr r0,[r4,#0x0]
  cbz r0,0x2c6402f0
  bl 0x2c485704
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
