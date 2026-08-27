; FUN_1405fddc @ 0x1405fddc size=18
  push {r4,lr}
  ldr r4,[0x1405fdf0]
  ldr r0,[r4,#0x28]
  cbz r0,0x1405fdec
  bl 0x14074168
  movs r3,#0x0
  str r3,[r4,#0x28]
  pop {r4,pc}
