; FUN_2c64ab3c @ 0x2c64ab3c size=34
  push {r3,lr}
  cbz r2,0x2c64ab52
  ldr r1,[0x2c64ab60]
  mov.w r0,#0xa10
  bl 0x2c6741e8
  ldr r3,[0x2c64ab64]
  movs r2,#0x0
  strb r2,[r3,#0x0]
  pop {r3,pc}
  bl 0x2c4beffc
  ldr r3,[0x2c64ab64]
  movs r2,#0x0
  strb r2,[r3,#0x0]
  pop {r3,pc}
