; FUN_2c650c38 @ 0x2c650c38 size=28
  add.w r1,r1,#0x40000000
  ldr r0,[r0,#0x0]
  subs r1,#0x4
  ldr.w r0,[r0,#-0xc]
  subs r1,r1,r0
  cmp r1,r2
  push {r3,lr}
  bcs 0x2c650c52
  mov r0,r3
  bl 0x2c658680
  pop {r3,pc}
