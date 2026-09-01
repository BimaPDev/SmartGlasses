; FUN_10071fdc @ 0x10071fdc size=44
  push {r4,lr}
  ldr r4,[0x10072008]
  mvn r1,#0x2
  adds r0,r4,#0x4
  bl 0x1011f62c
  ldr r0,[r4,#0x0]
  ldr r3,[r0,#0x8]
  ldr r3,[r3,#0xc]
  blx r3
  movs r1,#0x1
  movs r0,#0x0
  bl 0x1006a2c8
  bl 0x10071e1c
  pop.w {r4,lr}
  movs r0,#0x0
  b.w 0x1007193c
