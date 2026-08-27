; FUN_2c5b3834 @ 0x2c5b3834 size=26
  push {r3,lr}
  mov r3,r0
  ldrb r0,[r0,#0x4]
  cbz r0,0x2c5b384c
  ldr r0,[r3,#0x8]
  cbz r0,0x2c5b384c
  movs r1,#0x1
  bl 0x2c606b94
  eor r0,r0,#0x1
  uxtb r0,r0
  pop {r3,pc}
