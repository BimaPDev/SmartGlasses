; FUN_2c560668 @ 0x2c560668 size=22
  push {r3,lr}
  movs r2,#0x60
  movs r1,#0x0
  ldr r0,[r0,#0x18]
  bl 0x2c6033b4
  uxtb r0,r0
  subs r0,#0xff
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
