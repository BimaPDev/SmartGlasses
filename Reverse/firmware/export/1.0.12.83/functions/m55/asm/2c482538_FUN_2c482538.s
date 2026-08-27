; FUN_2c482538 @ 0x2c482538 size=28
  push {r4,lr}
  ldr r4,[0x2c482554]
  mov.w r1,#0xffffffff
  ldr r0,[r4,#0x0]
  bl 0x2c644044
  ldr r3,[0x2c482558]
  ldr r0,[r4,#0x0]
  ldrb r4,[r3,#0x0]
  bl 0x2c644080
  mov r0,r4
  pop {r4,pc}
