; FUN_101385b4 @ 0x101385b4 size=28
  push {r4,lr}
  bl 0x10138392
  ldrb r3,[r0,#0x4]
  ldr r2,[r0,#0x0]
  ldrb r2,[r2,r3]
  cmp r2,#0x28
  ittet eq
  add.eq r3,#0x1
  strb.eq r3,[r0,#0x4]
  mvn.ne r0,#0x3c
  mov.eq r0,#0x0
  pop {r4,pc}
