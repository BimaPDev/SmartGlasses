; FUN_2c5e4312 @ 0x2c5e4312 size=22
  push {r4,lr}
  mov r4,r0
  ldrb r0,[r3,#0xc]
  bl 0x2c5e4128
  mov r3,r0
  mov r0,r4
  ldr r3,[r3,#0x30]
  pop.w {r4,lr}
  bx r3
