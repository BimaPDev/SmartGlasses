; FUN_2c4f6b88 @ 0x2c4f6b88 size=44
  push {r4,lr}
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x2c4f6b9a
  mov r2,pc
  ldr r3,[0x2c4f6bb4]
  strd r2,lr,[r3,#0x0]
  movs r3,#0x40
  msr basepri,r3
  bl 0x2c673d58
  cbnz r4,0x2c4f6bae
  ldr r3,[0x2c4f6bb4]
  mov.w r2,#0xffffffff
  str r2,[r3,#0x0]
  msr basepri,r4
  pop {r4,pc}
