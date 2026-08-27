; FUN_2c48fd74 @ 0x2c48fd74 size=104
  push {r3,r4,r5,lr}
  mov r5,r0
  movs r0,#0x2
  mov r4,r1
  bl 0x2c49372c
  cbnz r0,0x2c48fdc8
  ldr r3,[0x2c48fddc]
  ldr r2,[r3,#0x0]
  cmp r2,#0x0
  blt 0x2c48fdbe
  ldr r2,[r3,#0x0]
  cmp r2,#0x14
  bgt 0x2c48fdbe
  ldr r2,[r3,#0x0]
  ldr r1,[0x2c48fde0]
  add.w r2,r2,r2, lsl #0x1
  add.w r2,r1,r2, lsl #0x3
  ldrb r2,[r2,#0xc]
  cbz r2,0x2c48fdbe
  ldr r2,[r3,#0x0]
  add.w r2,r2,r2, lsl #0x1
  add.w r1,r1,r2, lsl #0x3
  ldr r0,[r1,#0x14]
  ldr r2,[r1,#0x8]
  cmp r0,r2
  bcs 0x2c48fdcc
  ldr r0,[r3,#0x0]
  mov r2,r4
  mov r1,r5
  bl 0x2c48fcc8
  b 0x2c48fdc8
  mov r2,r4
  movs r1,#0x0
  mov r0,r5
  bl 0x2c674268
  movs r0,#0x0
  pop {r3,r4,r5,pc}
  ldr r3,[0x2c48fde4]
  ldr r0,[r3,#0x0]
  cmp r0,#0x0
  beq 0x2c48fdc8
  movs r1,#0x4
  bl 0x2c644100
  b 0x2c48fdc8
