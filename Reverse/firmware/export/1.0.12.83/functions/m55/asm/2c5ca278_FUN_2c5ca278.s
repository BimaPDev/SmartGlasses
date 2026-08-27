; FUN_2c5ca278 @ 0x2c5ca278 size=32
  push {r4,lr}
  mov r4,r0
  mov.w r2,#0xffffffff
  movs r0,#0x7
  mov r1,r4
  bl 0x2c5d7694
  cbnz r4,0x2c5ca28c
  pop {r4,pc}
  bl 0x2c5c685c
  pop.w {r4,lr}
  b.w 0x2c5c6910
