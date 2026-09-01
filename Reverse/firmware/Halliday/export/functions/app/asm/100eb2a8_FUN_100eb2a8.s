; FUN_100eb2a8 @ 0x100eb2a8 size=42
  push {r4,lr}
  ldr r4,[0x100eb2d4]
  ldr r3,[r4,#0x0]
  cbnz r3,0x100eb2d0
  bl 0x100eae68
  bl 0x100eb04c
  bl 0x10138fdc
  ldr r3,[0x100eb2d8]
  str r0,[r3,#0x0]
  ldr r0,[0x100eb2dc]
  bl 0x1013c856
  ldr r0,[0x100eb2e0]
  bl 0x1013c856
  movs r3,#0x1
  str r3,[r4,#0x0]
  pop {r4,pc}
