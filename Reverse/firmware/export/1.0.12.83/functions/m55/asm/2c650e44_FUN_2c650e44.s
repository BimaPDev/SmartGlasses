; FUN_2c650e44 @ 0x2c650e44 size=24
  ldr r2,[0x2c650e5c]
  cmp r0,r2
  push {r4,lr}
  beq 0x2c650e5a
  ldr r2,[r0,#0x8]
  subs r4,r2,#0x1
  cmp r2,#0x0
  str r4,[r0,#0x8]
  bgt 0x2c650e5a
  bl 0x2c650e3e
  pop {r4,pc}
