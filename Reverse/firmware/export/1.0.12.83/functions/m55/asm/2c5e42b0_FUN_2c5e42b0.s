; FUN_2c5e42b0 @ 0x2c5e42b0 size=26
  push {r4,r5,r6,lr}
  mov r5,r1
  mov r4,r0
  mov r6,r2
  bl 0x2c5e4128
  mov r1,r5
  ldr r3,[r0,#0x24]
  mov r2,r6
  mov r0,r4
  pop.w {r4,r5,r6,lr}
  bx r3
