; FUN_1011c8c2 @ 0x1011c8c2 size=20
  movs r3,#0x1
  asrs r2,r1,#0x5
  ldr.w r0,[r0,r2,lsl #0x2]
  and r1,r1,#0x1f
  lsl.w r1,r3,r1
  ands r0,r1
  bx lr
