; FUN_2c5c5456 @ 0x2c5c5456 size=28
  ldr r3,[0x2c5c5588]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x1c]
  eors r2,r3
  mov.w r3,#0x0
  bne.w 0x2c5c5582
  mov r0,r5
  add sp,#0x24
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  bl 0x2c674828
