; FUN_1404b580 @ 0x1404b580 size=46
  ldr r3,[0x1403cc08]
  str r0,[r3,#0x0]
  bx lr
  push {r3,lr}
  bl 0x140484a0
  ldr r1,[0x1404b5a8]
  movs r0,#0x3
  bl 0x140b4be0
  movs r2,#0x0
  ldr r3,[0x1404b5ac]
  ldr r0,[0x1404b5b0]
  strd r2,r2,[r3,#0x0]
  str r2,[r3,#0x8]
  bl 0x14096cb4
  pop.w {r3,lr}
  ldr r0,[0x1404b5b4]
  b.w 0x1403cc00
