; FUN_2c4bc884 @ 0x2c4bc884 size=66
  push {r4,lr}
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x2c4bc896
  mov r2,pc
  ldr r3,[0x2c4bc8c8]
  strd r2,lr,[r3,#0x0]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[0x2c4bc8cc]
  rsb r2,r0,r0, lsl #0x3
  add.w r3,r3,r2, lsl #0x4
  ldrb r2,[r3,#0xc]
  cmp r2,#0x1
  beq 0x2c4bc8bc
  cbnz r4,0x2c4bc8b6
  ldr r3,[0x2c4bc8c8]
  mov.w r2,#0xffffffff
  str r2,[r3,#0x0]
  msr basepri,r4
  pop {r4,pc}
  movs r2,#0x2
  strb r2,[r3,#0xc]
  bl 0x2c4bc22c
  b 0x2c4bc8ac
