; FUN_2c65fbe0 @ 0x2c65fbe0 size=48
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x2c65fc10]
  bl 0x2c64cf04
  ldr r3,[r4,#0x0]
  ldrd r2,r3,[r3,#0x4]
  cmp r3,r0
  bls 0x2c65fbfa
  ldr.w r0,[r2,r0,lsl #0x2]
  cbnz r0,0x2c65fbfe
  bl 0x2c65866e
  movs r3,#0x0
  ldr r2,[0x2c65fc14]
  ldr r1,[0x2c65fc18]
  bl 0x2c664f2c
  cbnz r0,0x2c65fc0e
  bl 0x2c664fde
  pop {r4,pc}
