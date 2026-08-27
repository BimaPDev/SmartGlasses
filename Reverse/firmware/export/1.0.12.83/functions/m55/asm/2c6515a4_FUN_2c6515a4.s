; FUN_2c6515a4 @ 0x2c6515a4 size=24
  ldr r2,[0x2c6515bc]
  cmp r0,r2
  push {r4,lr}
  beq 0x2c6515ba
  ldr r2,[r0,#0x8]
  subs r4,r2,#0x1
  cmp r2,#0x0
  str r4,[r0,#0x8]
  bgt 0x2c6515ba
  bl 0x2c65159e
  pop {r4,pc}
