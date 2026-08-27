; FUN_2c4e8f34 @ 0x2c4e8f34 size=36
  push {r4,lr}
  ldr r0,[r1,#0x0]
  bl 0x2c4efeec
  mov r4,r0
  bl 0x2c4e9354
  mov r3,r0
  uxth r0,r4
  ldr r3,[r3,#0x3c]
  blx r3
  ldr r2,[0x2c4e8f58]
  ldr r3,[0x2c4e8f5c]
  cmp r0,#0x0
  ite ne
  mov.ne r0,r2
  mov.eq r0,r3
  pop {r4,pc}
