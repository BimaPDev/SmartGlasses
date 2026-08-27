; FUN_2c46df20 @ 0x2c46df20 size=28
  push {r4,lr}
  ldr r4,[0x2c46df3c]
  ldr r0,[r4,#0x0]
  cbz r0,0x2c46df38
  mov.w r1,#0xffffffff
  bl 0x2c644044
  ldr r0,[r4,#0x0]
  cbz r0,0x2c46df38
  bl 0x2c644080
  ldr r0,[0x2c46df40]
  pop {r4,pc}
