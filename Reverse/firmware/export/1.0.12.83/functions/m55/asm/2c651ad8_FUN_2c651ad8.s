; FUN_2c651ad8 @ 0x2c651ad8 size=18
  push {r4,lr}
  mov r4,r2
  beq 0x2c651ae6
  subs r2,r2,r1
  ldr r0,[sp,#0x8]
  bl 0x2c674668
  mov r0,r4
  pop {r4,pc}
