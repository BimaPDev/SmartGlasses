; FUN_2c5f6a2c @ 0x2c5f6a2c size=32
  push {r4,r5}
  movs r4,#0x0
  ldr r5,[0x2c5f6a4c]
  mov r3,r1
  str r0,[r1,#0x0]
  str r5,[r1,#0x4]
  strd r4,r4,[r1,#0x8]
  subs r1,r2,#0x0
  bgt 0x2c5f6a44
  pop {r4,r5}
  bx lr
  mov r0,r3
  pop {r4,r5}
  b.w 0x2c5f6990
