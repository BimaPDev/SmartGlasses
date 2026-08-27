; FUN_2c134098 @ 0x2c134098 size=22
  push {r4,lr}
  ldr r4,[0x2c1340b0]
  ldrb r3,[r4,#0x0]
  cbnz r3,0x2c1340ae
  ldr r3,[0x2c1340b4]
  cbz r3,0x2c1340aa
  ldr r0,[0x2c1340b8]
  b 0x2c1340aa
  movs r3,#0x1
  strb r3,[r4,#0x0]
  pop {r4,pc}
