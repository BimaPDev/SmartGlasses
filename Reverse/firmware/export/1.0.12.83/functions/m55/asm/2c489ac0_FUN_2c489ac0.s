; FUN_2c489ac0 @ 0x2c489ac0 size=32
  push {r3,r4,r5,lr}
  ldr r5,[0x2c489ae0]
  mov r4,r0
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x0]
  bl 0x2c644044
  mov r0,r4
  bl 0x2c489a70
  ldr r0,[r5,#0x0]
  bl 0x2c644080
  movs r0,#0x1
  pop {r3,r4,r5,pc}
