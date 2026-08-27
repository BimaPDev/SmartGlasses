; FUN_2c4f881c @ 0x2c4f881c size=16
  push {r2,r4,lr}
  subs r4,#0x13
  strh r4,[r0,#0x20]
  subs r5,#0x68
  ldr r3,[0x2c4f882c]
  movs r2,#0x1
  strb r2,[r3,#0x0]
  bx lr
