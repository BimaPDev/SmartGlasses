; FUN_2c5ee9d4 @ 0x2c5ee9d4 size=36
  push {r3,r4,r5,lr}
  mov r4,r0
  cbz r0,0x2c5ee9f4
  ldr r5,[0x2c5ee9f8]
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x0]
  bl 0x2c644044
  mov r0,r4
  bl 0x2c5f0140
  mov r4,r0
  ldr r0,[r5,#0x0]
  bl 0x2c644080
  mov r0,r4
  pop {r3,r4,r5,pc}
