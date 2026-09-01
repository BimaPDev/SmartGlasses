; FUN_1011e2a6 @ 0x1011e2a6 size=26
  push {r4,r5}
  ldrh.w r4,[sp,#0x8]
  ldrh.w r5,[sp,#0xc]
  strd r4,r5,[sp,#0x8]
  movw r4,#0x70a0
  ldr r4,[r4,#0x18]
  mov r12,r4
  pop {r4,r5}
  bx r12
