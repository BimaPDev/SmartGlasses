; FUN_2c62b834 @ 0x2c62b834 size=40
  push {r4,r5,r6}
  ldr r4,[sp,#0xc]
  ldrb.w r6,[sp,#0x10]
  cbz r4,0x2c62b842
  movs r5,#0x0
  strh r5,[r4,#0x0]
  cbz r0,0x2c62b856
  ldrsb.w r5,[r0,#0x0]
  cbz r5,0x2c62b856
  cbz r1,0x2c62b856
  strd r4,r6,[sp,#0xc]
  pop {r4,r5,r6}
  b.w 0x2c62b56c
  movs r0,#0x0
  pop {r4,r5,r6}
  bx lr
