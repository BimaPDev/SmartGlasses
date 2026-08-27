; FUN_2c141b4c @ 0x2c141b4c size=34
  push {r4,lr}
  mov r4,r0
  cbz r0,0x2c141b58
  ldrb r3,[r0,#0x0]
  cmp r3,#0xf7
  beq 0x2c141b64
  mov r0,r4
  movs r1,#0x0
  bl 0x2c13ef18
  movs r0,#0x0
  pop {r4,pc}
  ldr r1,[r0,#0x14]
  bl 0x2c13ef18
  ldr r0,[r4,#0x14]
  pop {r4,pc}
