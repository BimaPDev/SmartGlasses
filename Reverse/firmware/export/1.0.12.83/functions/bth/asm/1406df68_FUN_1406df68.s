; FUN_1406df68 @ 0x1406df68 size=38
  push {r4,lr}
  ldr r3,[0x1406df9c]
  adds r0,#0x6
  ldr.w r4,[r3,r0,lsl #0x2]
  cbz r4,0x1406df80
  add.w r0,r4,#0x10
  pop.w {r4,lr}
  b.w 0x140587d4
  mov.w r2,#0x1a2
  movs r0,#0x42
  ldr r3,[0x1406dfa0]
  ldr r1,[0x1406dfa4]
  bl 0x1402a64c
