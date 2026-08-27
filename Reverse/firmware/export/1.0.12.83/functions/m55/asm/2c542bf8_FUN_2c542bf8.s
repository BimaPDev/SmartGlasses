; FUN_2c542bf8 @ 0x2c542bf8 size=34
  push {r3,lr}
  ldr r3,[r1,#0x24]
  ldr r2,[0x2c542c1c]
  bic r3,r3,#0xff00
  cmp r3,r2
  bne 0x2c542c14
  ldr r0,[r0,#0x4]
  bl 0x2c547aec
  bl 0x2c59a4e0
  movs r0,#0x0
  pop {r3,pc}
  mov.w r0,#0xffffffff
  pop {r3,pc}
