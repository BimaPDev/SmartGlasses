; FUN_2c4b5cfc @ 0x2c4b5cfc size=46
  push {r3,lr}
  ldr r3,[0x2c4b5d2c]
  ldrsb r3,[r3,r0]
  cmp r3,#0x0
  blt 0x2c4b5d1e
  ldr r0,[0x2c4b5d30]
  mov.w lr,#0x1
  add.w r12,r0,r3
  uxtb r0,r3
  strb.w lr,[r12,#0x7]
  pop.w {r3,lr}
  b.w 0x2c4b9460
  mov r3,r0
  movs r2,#0x0
  ldr r1,[0x2c4b5d34]
  ldr r0,[0x2c4b5d38]
  bl 0x2c673ca8
