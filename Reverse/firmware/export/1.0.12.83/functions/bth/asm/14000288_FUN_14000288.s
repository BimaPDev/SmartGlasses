; FUN_14000288 @ 0x14000288 size=34
  mov.w r3,#0x10000
  push {r4,lr}
  mov.w r4,#0x40000000
  movs r0,#0x2
  str r3,[r4,#0x60]
  bl 0x14000770
  mov.w r1,#0x8000
  movs r2,#0x8
  ldr r3,[0x140002ac]
  str r1,[r4,#0x60]
  str.w r2,[r3,#0xa0]
  pop {r4,pc}
