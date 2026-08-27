; FUN_2c489ea8 @ 0x2c489ea8 size=38
  push {r4,lr}
  ldr r4,[0x2c489ed0]
  ldr r0,[r4,#0x0]
  cbz r0,0x2c489ec4
  movs r1,#0x0
  bl 0x2c6442f0
  mov r1,r0
  cbz r0,0x2c489ec8
  movs r3,#0x0
  ldr r0,[r4,#0x0]
  strb r3,[r1,#0x0]
  bl 0x2c6442fc
  movs r0,#0x0
  pop {r4,pc}
  ldr r0,[0x2c489ed4]
  bl 0x2c673ca8
