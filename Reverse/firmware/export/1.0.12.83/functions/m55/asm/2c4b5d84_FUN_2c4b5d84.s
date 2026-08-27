; FUN_2c4b5d84 @ 0x2c4b5d84 size=68
  push {r3,r4,r5,r6,r7,lr}
  ldr r3,[0x2c4b5dc8]
  mov r5,r0
  ldrsb r4,[r3,r0]
  cmp r4,#0x0
  blt 0x2c4b5dbc
  ldr r6,[0x2c4b5dcc]
  rsb r2,r4,r4, lsl #0x3
  lsls r7,r4,#0x3
  add.w r2,r6,r2, lsl #0x2
  ldrb r3,[r2,#0xd]
  cbz r3,0x2c4b5da8
  mov r1,r0
  movs r0,#0x0
  bl 0x2c4b57f8
  subs r4,r7,r4
  movs r0,#0x0
  mov r1,r5
  bl 0x2c4b5750
  movs r0,#0x0
  add.w r6,r6,r4, lsl #0x2
  strb r0,[r6,#0xc]
  pop {r3,r4,r5,r6,r7,pc}
  mov r3,r0
  movs r2,#0x0
  ldr r1,[0x2c4b5dd0]
  ldr r0,[0x2c4b5dd4]
  bl 0x2c673ca8
