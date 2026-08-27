; FUN_2c6352b4 @ 0x2c6352b4 size=24
  push {r4,lr}
  mov r4,r1
  ldr r0,[r1,#0x28]
  bl 0x2c62bea8
  ldr r0,[r4,#0x2c]
  bl 0x2c62bea8
  movs r3,#0x0
  strd r3,r3,[r4,#0x28]
  pop {r4,pc}
