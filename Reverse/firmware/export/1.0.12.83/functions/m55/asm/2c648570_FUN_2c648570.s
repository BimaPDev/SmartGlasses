; FUN_2c648570 @ 0x2c648570 size=46
  push {r4,lr}
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x2c648582
  mov r2,pc
  ldr r3,[0x2c6485a0]
  strd r2,lr,[r3,#0x0]
  movs r3,#0x40
  msr basepri,r3
  ldr r0,[0x2c6485a4]
  bl 0x2c673d58
  cbnz r4,0x2c648598
  ldr r3,[0x2c6485a0]
  mov.w r2,#0xffffffff
  str r2,[r3,#0x0]
  msr basepri,r4
  pop {r4,pc}
