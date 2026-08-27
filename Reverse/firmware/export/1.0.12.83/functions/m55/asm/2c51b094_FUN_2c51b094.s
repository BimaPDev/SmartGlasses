; FUN_2c51b094 @ 0x2c51b094 size=46
  push {r4,lr}
  mov r4,r0
  bl 0x2c51ea10
  movs r3,#0x0
  ldr r1,[0x2c51b0c4]
  movs r2,#0x1
  mov r0,r4
  str r1,[r4,#0x0]
  str r3,[r4,#0x34]
  strb.w r2,[r4,#0xc0]
  strd r3,r3,[r4,#0xc]
  strd r3,r3,[r4,#0x14]
  strd r3,r3,[r4,#0x1c]
  strd r3,r3,[r4,#0x24]
  strd r3,r3,[r4,#0x2c]
  pop {r4,pc}
