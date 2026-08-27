; FUN_2c543404 @ 0x2c543404 size=26
  push {r3,lr}
  movs r2,#0x0
  ldr r3,[r0,#0x4]
  strb.w r2,[r0,#0x20]
  mov r0,r3
  ldr.w r2,[r3,#0x114]
  ldr r1,[r2,#0xc]
  bl 0x2c54800c
  movs r0,#0x1
  pop {r3,pc}
