; FUN_2c46c6fc @ 0x2c46c6fc size=38
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  movs r0,#0x28
  movs r1,#0x1
  bl 0x2c6685b4
  cbz r0,0x2c46c720
  movs r3,#0x3
  movs r1,#0x1
  ldr r2,[0x2c46c724]
  strb r3,[r0,#0x0]
  ldr r3,[0x2c46c728]
  str r1,[r0,#0xc]
  strd r5,r4,[r0,#0x18]
  strd r2,r3,[r0,#0x4]
  pop {r3,r4,r5,pc}
