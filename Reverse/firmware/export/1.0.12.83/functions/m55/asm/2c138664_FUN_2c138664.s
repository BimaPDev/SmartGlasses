; FUN_2c138664 @ 0x2c138664 size=34
  push {r4,r5,r6,lr}
  movs r4,#0x0
  movs r6,#0x1
  ldr r5,[0x2c138688]
  ldr r2,[r5,#0x0]
  lsl.w r3,r6,r4
  tst r3,r2
  uxtb r0,r4
  add.w r4,r4,#0x1
  beq 0x2c138680
  bl 0x2c1385f8
  cmp r4,#0x8
  bne 0x2c13866c
  pop {r4,r5,r6,pc}
