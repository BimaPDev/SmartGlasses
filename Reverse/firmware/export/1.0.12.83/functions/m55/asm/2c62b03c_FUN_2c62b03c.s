; FUN_2c62b03c @ 0x2c62b03c size=38
  push {r3,r4,r5,r6,r7,lr}
  mov r4,r0
  mov r7,r1
  mov r5,r2
  movs r1,#0x14
  mov r6,r3
  bl 0x2c62c3b0
  str r7,[r4,#0x0]
  cbz r5,0x2c62b05e
  ldr r3,[sp,#0x18]
  str r3,[r4,#0x10]
  ldr r3,[sp,#0x1c]
  strd r5,r6,[r4,#0x8]
  str r3,[r4,#0x4]
  pop {r3,r4,r5,r6,r7,pc}
  ldr r5,[0x2c62b064]
  b 0x2c62b050
