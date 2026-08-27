; FUN_2c659c12 @ 0x2c659c12 size=38
  push {r0,r1,r4,r5,r6,lr}
  ldr r4,[sp,#0x24]
  mov r6,r1
  mov r1,r3
  ldr r3,[r4,#0x0]
  ldrd r5,r0,[sp,#0x1c]
  add r3,r0
  strd r0,r3,[sp,#0x0]
  mov r3,r2
  mov r0,r5
  mov r2,r6
  bl 0x2c659b3c
  subs r0,r0,r5
  str r0,[r4,#0x0]
  add sp,#0x8
  pop {r4,r5,r6,pc}
