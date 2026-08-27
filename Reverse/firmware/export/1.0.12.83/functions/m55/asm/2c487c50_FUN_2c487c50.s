; FUN_2c487c50 @ 0x2c487c50 size=38
  push {r4,lr}
  ldr r4,[0x2c487c78]
  mov.w r1,#0xffffffff
  ldr r0,[r4,#0x0]
  bl 0x2c644044
  ldr r3,[0x2c487c7c]
  movs r2,#0x1
  strb r2,[r3,#0x0]
  bl 0x2c48736c
  bl 0x2c4874b0
  ldr r0,[r4,#0x0]
  pop.w {r4,lr}
  b.w 0x2c644080
