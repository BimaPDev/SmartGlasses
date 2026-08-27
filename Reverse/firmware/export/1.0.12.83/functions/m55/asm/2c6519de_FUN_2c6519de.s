; FUN_2c6519de @ 0x2c6519de size=22
  push {r3,lr}
  ldr r3,[r0,#0x8]
  cmp r3,#0x0
  blt 0x2c6519ec
  bl 0x2c6517b4
  pop {r3,pc}
  movs r2,#0x0
  bl 0x2c6517d0
  b 0x2c6519ea
