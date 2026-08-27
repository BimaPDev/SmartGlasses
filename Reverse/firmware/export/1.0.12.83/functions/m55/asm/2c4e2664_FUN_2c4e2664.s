; FUN_2c4e2664 @ 0x2c4e2664 size=34
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r5,r1
  mov r6,r2
  bl 0x2c4de5f8
  ldr r3,[0x2c4e2688]
  mov r0,r4
  str r3,[r4,#0x0]
  movs r3,#0x0
  strd r6,r5,[r4,#0x20]
  strd r3,r3,[r4,#0x28]
  strd r3,r3,[r4,#0x30]
  pop {r4,r5,r6,pc}
