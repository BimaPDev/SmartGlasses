; FUN_2c484238 @ 0x2c484238 size=36
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c48424e
  bl 0x2c46db38
  mov r3,r0
  mov r0,r4
  ldr r3,[r3,#0x24]
  pop.w {r4,lr}
  bx r3
  ldr r2,[0x2c48425c]
  movw r0,#0x711
  ldr r1,[0x2c484260]
  bl 0x2c6741e8
  b 0x2c48423e
