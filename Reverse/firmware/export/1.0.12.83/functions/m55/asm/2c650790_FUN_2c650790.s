; FUN_2c650790 @ 0x2c650790 size=36
  push {r3,r4,r5,lr}
  ldr r3,[r0,#0x18]
  mov r4,r0
  mov r5,r1
  cbz r3,0x2c65079c
  blx r3
  mov r1,r5
  mov r0,r4
  bl 0x2c6512e4
  ldr r3,[r5,#0x0]
  mov r0,r4
  ldr.w r3,[r3,#-0xc]
  str r3,[r4,#0x4]
  ldr r3,[0x2c6507b4]
  str r3,[r4,#0x18]
  pop {r3,r4,r5,pc}
