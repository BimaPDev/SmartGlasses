; FUN_101277d8 @ 0x101277d8 size=22
  push {r4,r5}
  ldr r4,[r0,#0x18]
  ldrb.w r5,[sp,#0x8]
  cbz r4,0x101277ea
  mov r12,r4
  str r5,[sp,#0x8]
  pop {r4,r5}
  bx r12
  pop {r4,r5}
  bx lr
