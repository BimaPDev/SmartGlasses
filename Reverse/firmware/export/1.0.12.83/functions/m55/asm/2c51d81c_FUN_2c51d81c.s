; FUN_2c51d81c @ 0x2c51d81c size=42
  push {r4,lr}
  mov r4,r0
  bl 0x2c51ea10
  movs r3,#0x0
  ldr r1,[0x2c51d848]
  movs r2,#0x1
  mov r0,r4
  str r1,[r4,#0x0]
  str r3,[r4,#0x24]
  strb.w r3,[r4,#0x28]
  strb.w r2,[r4,#0xb4]
  strd r3,r3,[r4,#0xc]
  strd r3,r3,[r4,#0x14]
  strd r3,r3,[r4,#0x1c]
  pop {r4,pc}
