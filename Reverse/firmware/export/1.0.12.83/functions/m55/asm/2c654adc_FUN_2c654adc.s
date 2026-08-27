; FUN_2c654adc @ 0x2c654adc size=32
  push {r4,lr}
  str r3,[r0,#0x0]
  mov r4,r0
  ldr r3,[r0,#0x10]
  adds r0,#0xc
  str r2,[r3,#0xc]
  str r2,[r3,#0x18]
  str r2,[r3,#0x20]
  str r2,[r3,#0x28]
  bl 0x2c64f89e
  mov r0,r4
  bl 0x2c64d9e8
  mov r0,r4
  pop {r4,pc}
