; FUN_2c4be8c0 @ 0x2c4be8c0 size=36
  push {r4,r5,r6,lr}
  movs r4,#0x0
  ldr r6,[0x2c4be8e4]
  movs r5,#0x1
  lsl.w r2,r5,r4
  ldr r3,[r6,#0x0]
  uxtb r1,r4
  movs r0,#0x0
  tst r2,r3
  add.w r4,r4,#0x1
  beq 0x2c4be8de
  bl 0x2c4be854
  cmp r4,#0x8
  bne 0x2c4be8c8
  pop {r4,r5,r6,pc}
