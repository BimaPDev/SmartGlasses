; FUN_2c620eec @ 0x2c620eec size=24
  push {r3,lr}
  bl 0x2c602418
  ldr r3,[0x2c620f04]
  mov r2,r0
  movs r1,#0x14
  ldr r0,[0x2c620f08]
  strb r2,[r3,#0x0]
  pop.w {r3,lr}
  b.w 0x2c62c928
