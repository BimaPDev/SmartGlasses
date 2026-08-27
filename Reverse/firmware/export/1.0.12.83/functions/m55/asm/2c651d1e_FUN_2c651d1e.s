; FUN_2c651d1e @ 0x2c651d1e size=26
  push {r3,r4,r5,lr}
  mov r4,r1
  mov r5,r2
  cmp r4,r5
  bcs 0x2c651d34
  ldr r0,[r4,#0x0]
  bl 0x2c66d6c8
  str.w r0,[r4],#0x4
  b 0x2c651d24
  mov r0,r5
  pop {r3,r4,r5,pc}
