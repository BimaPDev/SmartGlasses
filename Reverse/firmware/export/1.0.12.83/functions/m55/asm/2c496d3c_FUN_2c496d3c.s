; FUN_2c496d3c @ 0x2c496d3c size=44
  push {r4,lr}
  bl 0x2c646b44
  mov.w r2,#0xffffffff
  movs r1,#0x2
  movw r0,#0xffff
  bl 0x2c646bac
  bl 0x2c646b80
  mov r4,r0
  movw r0,#0xffff
  bl 0x2c646b44
  lsls r3,r4,#0x1e
  bpl 0x2c496d42
  bl 0x2c496b28
  b 0x2c496d42
