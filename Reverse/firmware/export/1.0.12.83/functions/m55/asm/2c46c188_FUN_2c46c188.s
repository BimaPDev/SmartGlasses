; FUN_2c46c188 @ 0x2c46c188 size=38
  push {r4,r5,r6,lr}
  mov r4,r1
  ldr r6,[0x2c46c1b0]
  mov r5,r0
  mov r1,r6
  mov r0,r4
  bl 0x2c46a548
  mov r0,r4
  ldrd r1,r2,[r5,#0x18]
  bl 0x2c46bffc
  mov r1,r6
  mov r0,r4
  bl 0x2c46a548
  movs r0,#0x0
  pop {r4,r5,r6,pc}
