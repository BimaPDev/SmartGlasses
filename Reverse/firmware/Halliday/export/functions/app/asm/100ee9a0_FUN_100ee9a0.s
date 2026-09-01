; FUN_100ee9a0 @ 0x100ee9a0 size=44
  push {r4,lr}
  mov.w r1,#0xffffffff
  ldr r0,[0x100ee9cc]
  bl 0x1011dbf4
  ldr r2,[0x100ee9d0]
  ldrb.w r3,[r2,#0x51]
  ands r4,r3,#0x1
  itee ne
  mvn.ne r4,#0x77
  orr.eq r3,r3,#0x1
  strb.eq.w r3,[r2,#0x51]
  bl 0x100ee690
  mov r0,r4
  pop {r4,pc}
