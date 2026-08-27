; FUN_140e41a4 @ 0x140e41a4 size=46
  push {r3,r4,r5,lr}
  movs r2,#0x0
  movs r3,#0x0
  mov r4,r0
  mov r5,r1
  bl 0x140e3ce4
  cbnz r0,0x140e41c0
  mov r0,r4
  mov r1,r5
  pop.w {r3,r4,r5,lr}
  b.w 0x140e4214
  mov r0,r4
  add.w r1,r5,#0x80000000
  bl 0x140e4214
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  pop {r3,r4,r5,pc}
