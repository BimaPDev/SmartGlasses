; FUN_2c47b5ce @ 0x2c47b5ce size=52
  push {r4,lr}
  bl 0x2c4795b4
  cbz r0,0x2c47b5ee
  ldr r3,[0x2c47b614]
  sub.w r1,r3,#0xe000
  ldrh.w r2,[r3,#0x4e]
  ldrb.w r3,[r1,#0x1b9]
  cmp r2,r3
  beq 0x2c47b5fe
  pop {r4,pc}
  ldr r2,[0x2c47b618]
  movw r0,#0x711
  ldr r1,[0x2c47b61c]
  pop.w {r4,lr}
  b.w 0x2c6741e8
  pop.w {r4,lr}
  b.w 0x2c479708
