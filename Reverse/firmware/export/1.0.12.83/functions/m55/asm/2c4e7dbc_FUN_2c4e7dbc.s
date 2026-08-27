; FUN_2c4e7dbc @ 0x2c4e7dbc size=32
  push {r3,lr}
  ldr r0,[r1,#0x0]
  bl 0x2c4efeec
  subs r3,r0,#0x1
  cmp r3,#0x2
  bls 0x2c4e7dce
  ldr r0,[0x2c4e7ddc]
  pop {r3,pc}
  uxtb r0,r0
  bl 0x2c4ec434
  cmp r0,#0x0
  beq 0x2c4e7dca
  ldr r0,[0x2c4e7de0]
  pop {r3,pc}
