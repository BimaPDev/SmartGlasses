; FUN_2c659a4c @ 0x2c659a4c size=48
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x2c659a7c]
  bl 0x2c64cf04
  ldr r3,[r4,#0x0]
  ldrd r2,r3,[r3,#0x4]
  cmp r3,r0
  bls 0x2c659a66
  ldr.w r0,[r2,r0,lsl #0x2]
  cbnz r0,0x2c659a6a
  bl 0x2c65866e
  movs r3,#0x0
  ldr r2,[0x2c659a80]
  ldr r1,[0x2c659a84]
  bl 0x2c664f2c
  cbnz r0,0x2c659a7a
  bl 0x2c664fde
  pop {r4,pc}
