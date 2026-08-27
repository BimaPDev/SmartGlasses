; FUN_2c51f730 @ 0x2c51f730 size=28
  push {r4,lr}
  ldr r2,[0x2c51f74c]
  mov r4,r0
  ldrb.w r3,[r0,#0x1e0]
  str r2,[r0,#0x0]
  cbz r3,0x2c51f742
  bl 0x2c51f6d8
  mov r0,r4
  bl 0x2c51ea24
  mov r0,r4
  pop {r4,pc}
