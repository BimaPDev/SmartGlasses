; FUN_2c4be8e8 @ 0x2c4be8e8 size=34
  push {r4,r5,r6,lr}
  movs r4,#0x0
  ldr r6,[0x2c4be90c]
  movs r5,#0x1
  lsl.w r2,r5,r4
  ldr r3,[r6,#0x0]
  movs r0,#0x1
  uxtb r1,r4
  tst r2,r3
  add r4,r0
  beq 0x2c4be904
  bl 0x2c4be854
  cmp r4,#0x8
  bne 0x2c4be8f0
  pop {r4,r5,r6,pc}
