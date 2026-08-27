; FUN_2c5491fe @ 0x2c5491fe size=42
  push {r3,r4,r5,lr}
  mov r5,r1
  movs r3,#0x1
  ldr r1,[0x2c549230]
  mov r4,r0
  bl 0x2c556db0
  cmp r0,#0x0
  blt 0x2c549222
  movs r3,#0x1
  add.w r2,r5,#0xa8
  ldr r1,[0x2c549234]
  mov r0,r4
  bl 0x2c55700c
  asrs r0,r0,#0x1f
  pop {r3,r4,r5,pc}
  mov.w r0,#0xffffffff
  pop {r3,r4,r5,pc}
