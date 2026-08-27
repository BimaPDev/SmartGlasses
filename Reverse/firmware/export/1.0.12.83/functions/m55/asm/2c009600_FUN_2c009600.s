; FUN_2c009600 @ 0x2c009600 size=24
  push {r4,lr}
  ldr r4,[0x2c009618]
  sub sp,#0x8
  mov r3,r0
  movs r0,#0x0
  str r1,[sp,#0x0]
  ldrb r2,[r4,#0xb]
  ldr r1,[r4,#0x0]
  bl 0x2c00928c
  add sp,#0x8
  pop {r4,pc}
