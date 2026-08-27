; FUN_2c50ed7c @ 0x2c50ed7c size=30
  push {r4,lr}
  mov r4,r0
  ldr r1,[0x2c50ed9c]
  ldr r0,[r0,#0x4]
  bl 0x2c62e838
  ldr r1,[0x2c50eda0]
  ldr r0,[r4,#0x8]
  bl 0x2c62e838
  movs r3,#0x0
  strd r3,r3,[r4,#0x0]
  str r3,[r4,#0x8]
  pop {r4,pc}
