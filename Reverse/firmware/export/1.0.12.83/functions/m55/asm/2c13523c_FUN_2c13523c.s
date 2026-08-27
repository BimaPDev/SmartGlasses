; FUN_2c13523c @ 0x2c13523c size=78
  push {r4,r5,lr}
  mrs r4,basepri
  cmp r4,#0x40
  beq 0x2c13524e
  mov r5,pc
  ldr r3,[0x2c13528c]
  strd r5,lr,[r3,#0x0]
  movs r3,#0x40
  msr basepri,r3
  ldr r3,[0x2c135290]
  str.w r1,[r3,r0,lsl #0x2]
  ldr r3,[0x2c135294]
  str.w r2,[r3,r0,lsl #0x2]
  ldr r2,[r3,#0x0]
  cbnz r2,0x2c135286
  ldr r2,[r3,#0x4]
  cbnz r2,0x2c135286
  ldr r3,[r3,#0x8]
  subs r3,#0x0
  it ne
  mov.ne r3,#0x1
  ldr r2,[0x2c135298]
  strb r3,[r2,#0x0]
  cbnz r4,0x2c13527e
  mov.w r2,#0xffffffff
  ldr r3,[0x2c13528c]
  str r2,[r3,#0x0]
  msr basepri,r4
  movs r0,#0x0
  pop {r4,r5,pc}
  movs r3,#0x1
  b 0x2c135270
