; FUN_2c4dc4ac @ 0x2c4dc4ac size=36
  push {r4,lr}
  bl 0x2c4dc3d8
  ldr r3,[r0,#0x0]
  mov.w r1,#0x218
  ldr r3,[r3,#0xc]
  blx r3
  mov r4,r0
  bl 0x2c4dbd36
  cbz r4,0x2c4dc4cc
  ldr r3,[r4,#0x0]
  ldr.w r3,[r3,#-0xc]
  add r4,r3
  mov r0,r4
  pop {r4,pc}
