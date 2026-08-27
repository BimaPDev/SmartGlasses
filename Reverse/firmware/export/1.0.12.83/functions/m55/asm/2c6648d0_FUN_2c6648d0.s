; FUN_2c6648d0 @ 0x2c6648d0 size=24
  add.w r1,r1,#0x10000000
  ldr r0,[r0,#0x4]
  subs r1,#0x1
  subs r1,r1,r0
  cmp r1,r2
  push {r3,lr}
  bcs 0x2c6648e6
  mov r0,r3
  bl 0x2c658680
  pop {r3,pc}
