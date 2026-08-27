; FUN_2c4e9144 @ 0x2c4e9144 size=30
  push {r3,lr}
  ldr r3,[0x2c4e9164]
  strd r0,r1,[r3,#0x0]
  bl 0x2c673c88
  bl 0x2c674808
  movs r3,#0x1
  ldr r1,[0x2c4e9168]
  ldr r2,[0x2c4e916c]
  str r0,[r1,#0x0]
  mov r0,r3
  strb r3,[r2,#0x0]
  pop {r3,pc}
