; FUN_10070c94 @ 0x10070c94 size=40
  push {r4,lr}
  ldr r4,[0x10070cbc]
  ldr.w r2,[r4,#0x80]
  cbz r2,0x10070ca0
  blx r2
  movs r1,#0x4
  ldr r0,[0x10070cc0]
  bl 0x1011f642
  ldr r3,[0x10070cc4]
  ldr r0,[r4,#0x0]
  ldr r2,[r3,#0x0]
  ldrb r3,[r2,#0x9]
  adds r3,#0x1
  strb r3,[r2,#0x9]
  pop.w {r4,lr}
  b.w 0x1011f5fc
