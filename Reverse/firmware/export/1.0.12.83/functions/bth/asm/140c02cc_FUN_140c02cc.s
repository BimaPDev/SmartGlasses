; FUN_140c02cc @ 0x140c02cc size=16
  push {r4,lr}
  ldr r4,[0x140c02dc]
  ldr r3,[r4,#0x0]
  cbnz r3,0x140c02d8
  bl 0x140c02b8
  ldr r0,[r4,#0x0]
  pop {r4,pc}
