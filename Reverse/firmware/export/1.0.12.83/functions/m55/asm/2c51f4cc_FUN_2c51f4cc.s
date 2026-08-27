; FUN_2c51f4cc @ 0x2c51f4cc size=40
  push {r4,lr}
  ldr r2,[0x2c51f4f4]
  mov r4,r0
  movs r3,#0x0
  ldr r0,[r0,#0x20]
  str r2,[r4,#0x0]
  strb r3,[r4,#0x1c]
  bl 0x2c62be40
  ldr r0,[r4,#0x20]
  bl 0x2c62be1c
  mov r0,r4
  bl 0x2c51ea24
  mov r0,r4
  bl 0x2c62bea8
  mov r0,r4
  pop {r4,pc}
