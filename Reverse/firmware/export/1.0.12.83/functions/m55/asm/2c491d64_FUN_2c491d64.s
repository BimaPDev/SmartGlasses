; FUN_2c491d64 @ 0x2c491d64 size=36
  push {r4,r5,r6,lr}
  mov r6,r0
  mov r5,r1
  movs r0,#0x2
  movs r1,#0xc
  mov r4,r2
  bl 0x2c4728e8
  ldr r2,[0x2c491d88]
  mov r1,r0
  strb r6,[r0,#0x0]
  str r5,[r0,#0x4]
  str r4,[r1,#0x8]
  ldr r0,[r2,#0x0]
  pop.w {r4,r5,r6,lr}
  b.w 0x2c4857c8
