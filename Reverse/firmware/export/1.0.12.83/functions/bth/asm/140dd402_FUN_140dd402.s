; FUN_140dd402 @ 0x140dd402 size=40
  push {r3,r4,r5,lr}
  mov r3,r0
  mov r4,r1
  cbnz r1,0x140dd426
  pop.w {r3,r4,r5,lr}
  b.w 0x140dc4fe
  adds r3,r0,#0x1
  mov r5,r0
  mov r1,r4
  mov r0,r3
  bl 0x140dc4fe
  cmp r0,#0x0
  bne 0x140dd412
  mov r0,r5
  pop {r3,r4,r5,pc}
  movs r5,#0x0
  b 0x140dd416
