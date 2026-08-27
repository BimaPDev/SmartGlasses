; FUN_2c54d918 @ 0x2c54d918 size=42
  push {r3,r4,r5,lr}
  mov r5,r0
  bl 0x2c48e738
  mov r4,r0
  add.w r0,r5,#0x1c
  bl 0x2c54d884
  ldr r1,[0x2c54d944]
  mov r2,r0
  mov r0,r4
  bl 0x2c48e474
  ldr r2,[r5,#0x4]
  ldr r1,[0x2c54d948]
  mov r0,r4
  bl 0x2c48e5b4
  mov r0,r4
  pop {r3,r4,r5,pc}
