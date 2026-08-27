; FUN_2c4d3c14 @ 0x2c4d3c14 size=32
  cbz r0,0x2c4d3c32
  push {r4,r5,r6,lr}
  ldr r5,[r0,#0x0]
  mov r4,r0
  cbz r5,0x2c4d3c30
  movs r6,#0x0
  ldr r0,[r5,#0x68]
  bl 0x2c4dc570
  str r6,[r5,#0x68]
  ldr r0,[r4,#0x0]
  bl 0x2c4dc570
  str r6,[r4,#0x0]
  pop {r4,r5,r6,pc}
  bx lr
