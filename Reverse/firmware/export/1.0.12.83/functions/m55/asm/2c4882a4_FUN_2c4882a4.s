; FUN_2c4882a4 @ 0x2c4882a4 size=26
  push {r4,lr}
  ldr r4,[0x2c4882c0]
  ldr r3,[r4,#0x0]
  cbz r3,0x2c4882bc
  ldr r0,[0x2c4882c4]
  bl 0x2c648680
  ldr r0,[r4,#0x0]
  bl 0x2c644958
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
