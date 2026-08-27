; FUN_1404d54c @ 0x1404d54c size=24
  push {r3,lr}
  bl 0x1404a1b4
  ldrb.w r3,[r0,#0x7f]
  cbnz r3,0x1404d55a
  pop {r3,pc}
  ldr r0,[r0,#0x78]
  pop.w {r3,lr}
  b.w 0x1409428c
