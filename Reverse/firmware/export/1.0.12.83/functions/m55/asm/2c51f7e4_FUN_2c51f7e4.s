; FUN_2c51f7e4 @ 0x2c51f7e4 size=34
  push {r4,lr}
  ldr r2,[0x2c51f808]
  mov r4,r0
  ldrb.w r3,[r0,#0x1e0]
  str r2,[r0,#0x0]
  cbz r3,0x2c51f7f6
  bl 0x2c51f6d8
  mov r0,r4
  bl 0x2c51ea24
  mov r0,r4
  bl 0x2c62bea8
  mov r0,r4
  pop {r4,pc}
