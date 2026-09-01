; FUN_10114f68 @ 0x10114f68 size=32
  push {r4,lr}
  mov r4,r1
  ldr r3,[0x10114f88]
  mov r1,r2
  ldr r0,[r3,#0x8]
  ldr r3,[0x10114f8c]
  str r0,[r3,#0x0]
  ldrd r2,r3,[sp,#0x8]
  bl 0x10114ec4
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x1013cbc2
