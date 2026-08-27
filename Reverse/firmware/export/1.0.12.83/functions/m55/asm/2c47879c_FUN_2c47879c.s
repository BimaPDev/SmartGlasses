; FUN_2c47879c @ 0x2c47879c size=24
  push {r4,lr}
  ldr r4,[0x2c4787b4]
  ldr r0,[r4,#0x0]
  cbz r0,0x2c4787b2
  bl 0x2c6448f0
  ldr r0,[r4,#0x0]
  bl 0x2c644958
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
