; FUN_2c6489c0 @ 0x2c6489c0 size=42
  movs r0,r0
  uxtb r2,r5
  mov r1,r7
  bl 0x2c4c0248
  mov r2,r5
  mov r1,r6
  ldr r0,[0x2c648a60]
  bl 0x2c648600
  ldr r3,[0x2c648a58]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  mov.w r3,#0x0
  bne 0x2c648a52
  add sp,#0xc
  pop {r4,r5,r6,r7,pc}
  bl 0x2c674828
