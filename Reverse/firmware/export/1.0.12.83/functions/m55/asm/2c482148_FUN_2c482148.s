; FUN_2c482148 @ 0x2c482148 size=30
  push {r3,r4,r5,lr}
  ldr r5,[0x2c482168]
  mov r4,r0
  ldr r3,[r5,#0x0]
  cbz r3,0x2c482158
  ldr r3,[0x2c48216c]
  str r4,[r3,#0x0]
  pop {r3,r4,r5,pc}
  ldr r0,[0x2c482170]
  bl 0x2c64419c
  ldr r3,[0x2c48216c]
  str r0,[r5,#0x0]
  str r4,[r3,#0x0]
  pop {r3,r4,r5,pc}
