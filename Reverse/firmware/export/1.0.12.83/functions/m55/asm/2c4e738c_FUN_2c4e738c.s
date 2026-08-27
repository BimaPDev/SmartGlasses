; FUN_2c4e738c @ 0x2c4e738c size=38
  push {r4,lr}
  ldr r0,[r1,#0x0]
  bl 0x2c4efeec
  mov r4,r0
  bl 0x2c4e9354
  mov r3,r0
  mov r0,r4
  ldr.w r3,[r3,#0x84]
  blx r3
  ldr r2,[0x2c4e73b4]
  ldr r3,[0x2c4e73b8]
  cmp r0,#0x0
  ite ne
  mov.ne r0,r2
  mov.eq r0,r3
  pop {r4,pc}
