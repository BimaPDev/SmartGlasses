; FUN_1409d6e4 @ 0x1409d6e4 size=38
  mov.w r2,#0xffffffff
  mvn r1,#0xff000000
  ldr r3,[0x1409d510]
  ldr r0,[0x1409d514]
  strh r2,[r3,#0x0]
  str r2,[r0,#0x0]
  strb r1,[r3,#0x2]
  bx lr
  push {r3,lr}
  bl 0x1409dc50
  bl 0x1409de5c
  pop.w {r3,lr}
  b.w 0x1409d4fc
