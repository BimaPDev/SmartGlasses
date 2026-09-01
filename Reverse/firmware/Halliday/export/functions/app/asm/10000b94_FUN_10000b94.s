; FUN_10000b94 @ 0x10000b94 size=28
  movs r3,#0x0
  push {r4,lr}
  ldr r2,[0x10000bb0]
  add.w r1,r2,#0x24
  ldr.w r4,[r2],#0x4
  ldr.w r0,[r1],#0x4
  adds r3,#0x1
  cmp r3,#0x9
  str r4,[r0,#0x0]
  bne 0x10000b9e
  pop {r4,pc}
