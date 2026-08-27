; FUN_2c5fd09c @ 0x2c5fd09c size=28
  push {r4,lr}
  ldr r4,[0x2c5fd0b8]
  mov.w r1,#0xffffffff
  ldr r0,[r4,#0x0]
  bl 0x2c644044
  ldr r3,[0x2c5fd0bc]
  ldr r0,[r4,#0x0]
  ldr r4,[r3,#0x0]
  bl 0x2c644080
  mov r0,r4
  pop {r4,pc}
