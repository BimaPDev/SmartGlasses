; FUN_1005c49c @ 0x1005c49c size=68
  push {r4,lr}
  mov.w r3,#0x20
  mrs r1,basepri
  msr basepri_max,r3
  isb #0xf
  ldr r2,[0x1005c4e0]
  movs r0,#0x0
  mov r3,r2
  ldrb r4,[r2,#0xe]
  cbnz r4,0x1005c4d4
  movs r4,#0x1
  add.w r2,r3,r0, lsl #0x4
  strb r4,[r2,#0xe]
  msr basepri,r1
  isb #0xf
  cmp r0,#0x18
  ite eq
  mov.eq r0,#0x0
  add.ne.w r0,r3,r0, lsl #0x4
  pop {r4,pc}
  adds r0,#0x1
  cmp r0,#0x18
  add.w r2,r2,#0x10
  bne 0x1005c4b4
  b 0x1005c4c0
