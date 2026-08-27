; FUN_2c50ad88 @ 0x2c50ad88 size=118
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x3c]
  cbz r0,0x2c50ad96
  movs r1,#0x1
  bl 0x2c606a28
  ldr r0,[r4,#0x60]
  cbz r0,0x2c50ada0
  movs r1,#0x1
  bl 0x2c606a28
  ldrb.w r3,[r4,#0x25]
  add.w r3,r3,r3, lsl #0x3
  add.w r3,r4,r3, lsl #0x2
  ldr r1,[r3,#0x3c]
  cbz r1,0x2c50adc6
  mov r0,r1
  movs r1,#0x1
  bl 0x2c606abc
  ldrb.w r3,[r4,#0x25]
  add.w r3,r3,r3, lsl #0x3
  add.w r3,r4,r3, lsl #0x2
  ldr r1,[r3,#0x3c]
  add.w r0,r4,#0x2ec
  bl 0x2c50ec60
  ldrb.w r3,[r4,#0x25]
  add.w r0,r4,#0x388
  add.w r3,r3,r3, lsl #0x3
  add.w r3,r4,r3, lsl #0x2
  ldr r1,[r3,#0x44]
  bl 0x2c50ec60
  ldrb.w r3,[r4,#0x24]
  cmp r3,#0x0
  iteet eq
  mov.eq r2,#0x1
  mov.ne r2,#0x0
  mov.ne r3,#0x1
  mov.eq r3,#0x0
  strb.w r2,[r4,#0x24]
  strb.w r3,[r4,#0x25]
  pop {r4,pc}
