; FUN_2c647090 @ 0x2c647090 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c64709c
  ldrb r3,[r0,#0x0]
  cmp r3,#0xf6
  beq 0x2c6470a8
  mov r0,r4
  movs r1,#0x0
  bl 0x2c643b64
  movs r0,#0x0
  pop {r4,pc}
  ldrh r1,[r0,#0xc]
  bl 0x2c643b64
  ldrh r0,[r4,#0xc]
  pop {r4,pc}
