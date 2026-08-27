; FUN_2c469954 @ 0x2c469954 size=22
  push {r4,lr}
  ldr r4,[0x2c46996c]
  ldrb r3,[r4,#0x0]
  cbnz r3,0x2c46996a
  ldr r3,[0x2c469970]
  cbz r3,0x2c469966
  ldr r0,[0x2c469974]
  b 0x2c469966
  movs r3,#0x1
  strb r3,[r4,#0x0]
  pop {r4,pc}
