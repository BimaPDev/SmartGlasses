; FUN_10070c60 @ 0x10070c60 size=40
  push {r4,lr}
  ldr r4,[0x10070c88]
  ldr.w r2,[r4,#0x84]
  cbz r2,0x10070c6c
  blx r2
  movs r1,#0x8
  ldr r0,[0x10070c8c]
  bl 0x1011f642
  ldr r3,[0x10070c90]
  ldr r0,[r4,#0x0]
  ldr r2,[r3,#0x4]
  ldrb r3,[r2,#0x9]
  adds r3,#0x1
  strb r3,[r2,#0x9]
  pop.w {r4,lr}
  b.w 0x1011f5fc
