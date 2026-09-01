; FUN_10125f56 @ 0x10125f56 size=44
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r1
  bl 0x10089398
  ldr r2,[r4,#0x8]
  ldrb.w r3,[r2,#0x20]
  and r1,r3,#0x3
  cmp r1,r5
  beq 0x10125f80
  bfi r3,r5,#0x0,#0x2
  mov r0,r4
  strb.w r3,[r2,#0x20]
  pop.w {r3,r4,r5,lr}
  b.w 0x10125af4
  pop {r3,r4,r5,pc}
