; FUN_1011c588 @ 0x1011c588 size=18
  push {r4,r5}
  ldrb.w r5,[sp,#0x8]
  ldr r4,[r0,#0x8]
  str r5,[sp,#0x8]
  ldr r4,[r4,#0x0]
  mov r12,r4
  pop {r4,r5}
  bx r12
