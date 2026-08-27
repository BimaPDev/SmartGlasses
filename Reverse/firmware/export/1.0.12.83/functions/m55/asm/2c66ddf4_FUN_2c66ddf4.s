; FUN_2c66ddf4 @ 0x2c66ddf4 size=44
  push {r0,r1,r4,lr}
  mov r3,r1
  ldr r1,[0x2c66de20]
  mov r2,r0
  ldr r4,[r1,#0x0]
  cbz r4,0x2c66de12
  ldr r1,[r4,#0x18]
  cbnz r1,0x2c66de12
  strd r0,r3,[sp,#0x0]
  mov r0,r4
  bl 0x2c668868
  ldrd r2,r3,[sp,#0x0]
  ldr r1,[r4,#0x8]
  mov r0,r4
  add sp,#0x8
  pop.w {r4,lr}
  b.w 0x2c669d50
