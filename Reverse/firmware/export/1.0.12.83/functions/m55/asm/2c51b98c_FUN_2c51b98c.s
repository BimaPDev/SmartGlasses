; FUN_2c51b98c @ 0x2c51b98c size=32
  push {r4,lr}
  mov r4,r0
  bl 0x2c51ea10
  movs r3,#0x0
  ldr r1,[0x2c51b9ac]
  movs r2,#0x1
  mov r0,r4
  str r1,[r4,#0x0]
  strb.w r2,[r4,#0xa4]
  strd r3,r3,[r4,#0xc]
  strd r3,r3,[r4,#0x14]
  pop {r4,pc}
