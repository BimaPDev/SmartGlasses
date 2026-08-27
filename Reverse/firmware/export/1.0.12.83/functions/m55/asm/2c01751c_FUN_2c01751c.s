; FUN_2c01751c @ 0x2c01751c size=42
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  b 0x2c017530
  bl 0x2c017408
  cbz r0,0x2c017544
  movs r0,#0xa
  bl 0x2c0185bc
  bl 0x2c0164f0
  cmp r4,#0x3
  mov r1,r4
  mov r0,r5
  bne 0x2c017524
  bl 0x2c0173c8
  cmp r0,#0x0
  beq 0x2c01752a
  pop {r3,r4,r5,pc}
