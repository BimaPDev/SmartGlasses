; FUN_2c66ed00 @ 0x2c66ed00 size=28
  push {r4,r5,lr}
  movs r4,#0x0
  cmp r4,r2
  mov r3,r0
  bne 0x2c66ed10
  movs r3,#0x0
  mov r0,r3
  pop {r4,r5,pc}
  ldr r5,[r3,#0x0]
  adds r0,#0x4
  cmp r5,r1
  beq 0x2c66ed0c
  adds r4,#0x1
  b 0x2c66ed04
