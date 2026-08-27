; FUN_2c647344 @ 0x2c647344 size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c647350
  ldrb r3,[r0,#0x0]
  cmp r3,#0xf7
  beq 0x2c64735c
  mov r0,r4
  movs r1,#0x0
  bl 0x2c643b9c
  movs r0,#0x0
  pop {r4,pc}
  ldr r1,[r0,#0x14]
  bl 0x2c643b9c
  ldr r0,[r4,#0x14]
  pop {r4,pc}
