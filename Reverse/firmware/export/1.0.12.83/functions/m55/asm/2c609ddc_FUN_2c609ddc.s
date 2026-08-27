; FUN_2c609ddc @ 0x2c609ddc size=22
  push {r4,lr}
  mov r4,r1
  bl 0x2c60fb10
  ldr r1,[0x2c609df4]
  ldr r2,[0x2c609df8]
  ldr r3,[0x2c609dfc]
  str r1,[r4,#0x14]
  str r2,[r4,#0x24]
  str r3,[r4,#0x54]
  pop {r4,pc}
