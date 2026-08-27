; FUN_2c655b40 @ 0x2c655b40 size=38
  ldr r3,[r1,#0x18]
  push {r4,lr}
  mov r4,r0
  cbnz r3,0x2c655b4e
  ldr r0,[0x2c655b68]
  bl 0x2c658674
  ldrd r3,r2,[r1,#0x0]
  add.w r1,r0,#0x8
  add.w r2,r3,r2, lsl #0x2
  str r1,[r0,#0x0]
  mov r1,r3
  bl 0x2c654a10
  mov r0,r4
  pop {r4,pc}
