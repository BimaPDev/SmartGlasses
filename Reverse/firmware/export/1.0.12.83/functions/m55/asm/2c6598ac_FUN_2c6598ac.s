; FUN_2c6598ac @ 0x2c6598ac size=48
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x2c6598dc]
  bl 0x2c64cf04
  ldr r3,[r4,#0x0]
  ldrd r2,r3,[r3,#0x4]
  cmp r3,r0
  bls 0x2c6598c6
  ldr.w r0,[r2,r0,lsl #0x2]
  cbnz r0,0x2c6598ca
  bl 0x2c65866e
  movs r3,#0x0
  ldr r2,[0x2c6598e0]
  ldr r1,[0x2c6598e4]
  bl 0x2c664f2c
  cbnz r0,0x2c6598da
  bl 0x2c664fde
  pop {r4,pc}
