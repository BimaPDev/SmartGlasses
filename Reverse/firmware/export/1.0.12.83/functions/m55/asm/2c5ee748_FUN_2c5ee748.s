; FUN_2c5ee748 @ 0x2c5ee748 size=36
  push {r3,r4,r5,lr}
  ldr r5,[0x2c5ee76c]
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x0]
  bl 0x2c644044
  ldr r3,[0x2c5ee770]
  ldr.w r0,[r3,#0x2d0]
  bl 0x2c5efec0
  mov r4,r0
  ldr r0,[r5,#0x0]
  bl 0x2c644080
  mov r0,r4
  pop {r3,r4,r5,pc}
