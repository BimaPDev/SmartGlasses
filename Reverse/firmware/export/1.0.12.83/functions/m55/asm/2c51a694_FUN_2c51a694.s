; FUN_2c51a694 @ 0x2c51a694 size=32
  push {r4,lr}
  mov r4,r0
  bl 0x2c51ea10
  movs r3,#0x0
  ldr r2,[0x2c51a6b4]
  mov r0,r4
  str r2,[r4,#0x0]
  str r3,[r4,#0x20]
  str r3,[r4,#0x28]
  str r3,[r4,#0x1c]
  strd r3,r3,[r4,#0xc]
  strd r3,r3,[r4,#0x14]
  pop {r4,pc}
