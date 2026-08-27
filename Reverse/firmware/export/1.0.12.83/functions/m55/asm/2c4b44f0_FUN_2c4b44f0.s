; FUN_2c4b44f0 @ 0x2c4b44f0 size=30
  push {r4,lr}
  mov r4,r2
  bl 0x2c4b49b0
  bl 0x2c4b49a4
  ldr r3,[r4,#0x0]
  cmp r3,#0x0
  blt 0x2c4b4506
  movs r0,#0x1
  pop {r4,pc}
  bl 0x2c4b4a24
  movs r0,#0x1
  pop {r4,pc}
