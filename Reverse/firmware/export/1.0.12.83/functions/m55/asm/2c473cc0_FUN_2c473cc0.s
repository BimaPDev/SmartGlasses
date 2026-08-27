; FUN_2c473cc0 @ 0x2c473cc0 size=24
  cbz r0,0x2c473cd6
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  cbz r0,0x2c473cd4
  movs r1,#0x0
  bl 0x2c476968
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
  bx lr
