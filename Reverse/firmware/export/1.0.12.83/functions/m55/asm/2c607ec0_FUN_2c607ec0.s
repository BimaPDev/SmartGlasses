; FUN_2c607ec0 @ 0x2c607ec0 size=16
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  bl 0x2c606bc8
  ldr r3,[r5,#0x8]
  strh r4,[r3,#0x14]
  pop {r3,r4,r5,pc}
