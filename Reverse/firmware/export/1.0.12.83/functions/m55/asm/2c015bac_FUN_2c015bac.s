; FUN_2c015bac @ 0x2c015bac size=22
  push {r4,lr}
  ldr r4,[0x2c015bc4]
  ldr r3,[r4,#0x0]
  cbz r3,0x2c015bb8
  blx r3
  cbnz r0,0x2c015bbe
  ldr r3,[r4,#0x4]
  cbz r3,0x2c015bbe
  blx r3
  movs r0,#0x0
  pop {r4,pc}
