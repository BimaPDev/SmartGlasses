; FUN_2c0095cc @ 0x2c0095cc size=30
  cmp r0,#0xe
  push {r3,lr}
  bhi 0x2c0095e2
  ldr r2,[0x2c0095ec]
  ldr r3,[r2,#0x4]
  bic r3,r3,#0x780
  orr.w r3,r3,r0, lsl #0x7
  str r3,[r2,#0x4]
  pop {r3,pc}
  mov r1,r0
  ldr r0,[0x2c0095f0]
  bl 0x2c00c25c
