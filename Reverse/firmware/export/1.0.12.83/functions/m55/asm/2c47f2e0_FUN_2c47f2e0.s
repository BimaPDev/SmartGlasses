; FUN_2c47f2e0 @ 0x2c47f2e0 size=36
  push {r3,r4,r5,lr}
  mov r5,r2
  mov r4,r0
  bl 0x2c47ede8
  ldr r0,[r5,#0x0]
  ldr r1,[r5,#0x4]
  ldr r2,[r5,#0x8]
  ldr r3,[r5,#0xc]
  str.w r0,[r4,#0xf0]
  str.w r1,[r4,#0xf4]
  str.w r2,[r4,#0xf8]
  str.w r3,[r4,#0xfc]
  pop {r3,r4,r5,pc}
