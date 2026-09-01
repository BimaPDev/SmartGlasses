; FUN_1010cac8 @ 0x1010cac8 size=104
  push {r4,lr}
  ldr r4,[0x1010cb30]
  ldr.w r3,[r4,#0x6e4]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r1,[r3,#0x6dc]
  cbnz r1,0x1010caea
  ldr r3,[0x1010cb34]
  ldr r0,[r3,#0x0]
  cbz r0,0x1010cb2e
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x1010b62c
  movs r2,#0x1
  mov.w r1,#0xa00
  mov r0,r4
  bl 0x1013b1e8
  cbnz r0,0x1010cb2e
  bl 0x1010c204
  cbnz r0,0x1010cb2e
  mov r0,r4
  bl 0x1010b660
  cbnz r0,0x1010cb2e
  movs r3,#0x1
  movw r1,#0x1388
  mov r0,r4
  str r3,[r4,#0x20]
  bl 0x1010b62c
  cbnz r0,0x1010cb2e
  ldr.w r3,[r4,#0x6e4]
  adds r3,#0x1
  and r3,r3,#0x1
  str.w r3,[r4,#0x6e4]
  add.w r3,r3,#0x1b6
  add.w r4,r4,r3, lsl #0x2
  str r0,[r4,#0x4]
  pop {r4,pc}
