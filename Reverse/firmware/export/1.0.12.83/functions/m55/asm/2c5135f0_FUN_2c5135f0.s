; FUN_2c5135f0 @ 0x2c5135f0 size=24
  push {r4,lr}
  mov r4,r0
  bl 0x2c62be40
  movs r2,#0x0
  ldr r0,[r4,#0xc]
  ldr r3,[r0,#0x0]
  strb r2,[r0,#0x8]
  ldr r3,[r3,#0x8]
  pop.w {r4,lr}
  bx r3
