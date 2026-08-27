; FUN_2c5ee97c @ 0x2c5ee97c size=40
  push {r3,r4,r5,lr}
  ldr r5,[0x2c5ee9a4]
  mov r4,r0
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x0]
  bl 0x2c644044
  ldr r3,[0x2c5ee9a8]
  mov r1,r4
  ldr.w r0,[r3,#0x2d0]
  bl 0x2c5eff20
  mov r4,r0
  ldr r0,[r5,#0x0]
  bl 0x2c644080
  mov r0,r4
  pop {r3,r4,r5,pc}
