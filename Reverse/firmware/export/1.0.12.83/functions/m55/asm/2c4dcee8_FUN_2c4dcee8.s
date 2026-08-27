; FUN_2c4dcee8 @ 0x2c4dcee8 size=36
  push {r4,lr}
  bl 0x2c4dc3d8
  ldr r3,[r0,#0x0]
  mov.w r1,#0x230
  ldr r3,[r3,#0xc]
  blx r3
  mov r4,r0
  bl 0x2c4dcbb4
  cbz r4,0x2c4dcf08
  ldr r3,[r4,#0x0]
  ldr.w r3,[r3,#-0xc]
  add r4,r3
  mov r0,r4
  pop {r4,pc}
