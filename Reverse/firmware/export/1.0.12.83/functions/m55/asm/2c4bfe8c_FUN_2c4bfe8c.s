; FUN_2c4bfe8c @ 0x2c4bfe8c size=68
  push {r4,lr}
  mrs r3,basepri
  cmp r3,#0x40
  beq 0x2c4bfe9e
  mov r1,pc
  ldr r2,[0x2c4bfed0]
  strd r1,lr,[r2,#0x0]
  movs r2,#0x40
  msr basepri,r2
  ldr r2,[0x2c4bfed4]
  ldr r1,[0x2c4bfed8]
  ldr r4,[0x2c4bfedc]
  str.w r4,[r2,#0xc00]
  ldr.w r0,[r1,r0,lsl #0x2]
  movs r1,#0x1
  str r0,[r2,#0x0]
  str.w r1,[r2,#0xc00]
  cbnz r3,0x2c4bfec4
  ldr r2,[0x2c4bfed0]
  mov.w r1,#0xffffffff
  str r1,[r2,#0x0]
  msr basepri,r3
  ldr r3,[0x2c4bfed4]
  ldr.w r3,[r3,#0xc00]
  pop {r4,pc}
