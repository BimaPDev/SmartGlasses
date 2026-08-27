; FUN_2c4857a8 @ 0x2c4857a8 size=22
  push {r3,lr}
  cbz r0,0x2c4857b6
  ldr r3,[r0,#0x8]
  cbz r3,0x2c4857b6
  ldr r3,[r0,#0x0]
  ldr r0,[r3,#0x4]
  pop {r3,pc}
  ldr r1,[0x2c4857c0]
  ldr r0,[0x2c4857c4]
  bl 0x2c673ca8
