; FUN_2c4fb748 @ 0x2c4fb748 size=40
  push {r4,lr}
  ldr r4,[0x2c4fb770]
  ldr r1,[r4,#0x0]
  cbz r1,0x2c4fb75e
  ldr r3,[0x2c4fb774]
  ldr r2,[0x2c4fb778]
  str r2,[r3,#0x0]
  bl 0x2c4fbf50
  movs r0,#0x0
  pop {r4,pc}
  ldr r0,[0x2c4fb77c]
  bl 0x2c6441a4
  str r0,[r4,#0x0]
  cmp r0,#0x0
  bne 0x2c4fb750
  ldr r0,[0x2c4fb780]
  bl 0x2c673ca8
