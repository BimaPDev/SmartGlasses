; FUN_2c51edd4 @ 0x2c51edd4 size=34
  push {r4,lr}
  ldr r3,[0x2c51edf8]
  mov r4,r0
  ldr r0,[r0,#0x30]
  str r3,[r4,#0x0]
  bl 0x2c62be1c
  movs r3,#0x0
  mov r0,r4
  str r3,[r4,#0x30]
  bl 0x2c51ea24
  mov r0,r4
  bl 0x2c62bea8
  mov r0,r4
  pop {r4,pc}
