; FUN_2c65061c @ 0x2c65061c size=30
  ldr r3,[r1,#0x18]
  push {r0,r1,r4,lr}
  mov r4,r0
  cbnz r3,0x2c65062a
  ldr r0,[0x2c65063c]
  bl 0x2c658674
  add r3,sp,#0x4
  ldrd r1,r2,[r1,#0x0]
  bl 0x2c651320
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
