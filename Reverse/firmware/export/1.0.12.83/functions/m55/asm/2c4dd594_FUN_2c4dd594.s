; FUN_2c4dd594 @ 0x2c4dd594 size=34
  push {r4,lr}
  mov r4,r0
  bl 0x2c4de5f8
  ldr r3,[0x2c4dd5b8]
  movs r2,#0xf
  mov r0,r4
  str r3,[r4,#0x0]
  movs r3,#0x0
  strd r3,r3,[r4,#0x20]
  strd r2,r3,[r4,#0x28]
  strd r3,r3,[r4,#0x30]
  str r3,[r4,#0x38]
  pop {r4,pc}
