; FUN_2c1418dc @ 0x2c1418dc size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c1418e8
  ldrb r3,[r0,#0x0]
  cmp r3,#0xf6
  beq 0x2c1418f4
  mov r0,r4
  movs r1,#0x0
  bl 0x2c13eee8
  movs r0,#0x0
  pop {r4,pc}
  ldrh r1,[r0,#0xc]
  bl 0x2c13eee8
  ldrh r0,[r4,#0xc]
  pop {r4,pc}
